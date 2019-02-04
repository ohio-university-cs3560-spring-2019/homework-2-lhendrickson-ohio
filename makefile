Prog1: prog1.o libheader.a
	g++ -o   Prog1 ./include/prog1.o  ./lib/libheader.a

libheader.a: header.o
	mkdir lib
	ar rcs libheader.a header.o
	mv libheader.a ./lib
	mv header.o ./lib

header.o: header.cc header.h
	g++ -c header.cc


prog1.o: prog1.cc header.h
	mkdir include
	g++ -c prog1.cc
	mv prog1.o ./include
