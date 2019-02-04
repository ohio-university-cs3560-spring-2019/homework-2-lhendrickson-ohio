//Written by Liam Hendrickson
//Course: CS 3560 with Chad Mourning
//Assignment: Homework 1
//Ohio Univrsity

#ifndef HEADER_H
#define HEADER_H

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class  WordChange
{
 public:
  WordChange();//creates instance of the class
  void set_initial(string s1);//sets the string to look for
  void set_post(string s2);//sets the string to place in the file

  void change_file();//changes s1 to s2


 private:
  string initial;
  string post;
  string  file;
  
};
#endif
