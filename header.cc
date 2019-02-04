//Written by Liam Hendrickson
//Course: CS 3560 with Chad Mourning
//Assignment: Homework 1
//Ohio University

#include <iostream>
#include <string>
#include "header.h"

using namespace std;

WordChange::WordChange()
{
  initial="";
  post="";

}

void WordChange::set_initial(string s1)
{
  initial=s1;
}

void WordChange::set_post(string s2)
{
  post=s2;
}


void WordChange::change_file()
{
  size_t index = 0;
  size_t len = initial.length();

  getline(cin,file);
  while(!cin.eof()){
    
    while(true){
      
      index = file.find(initial, index);//finds the begining of an entry of initial
      if(index >= (file.length()-1)){//checks to see if index is at the end of the string 
	index=0;
	cout<<file<<'\n';
	break;//exits if true
      }

      file.replace(index, len, post);//replaces initial with post

      index+=len;//moves index past where it stopped in case initial==post
    }

    getline(cin,file);
  }
}
  

    
