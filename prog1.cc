//Written by Liam Hendrickson
//Course: CS 3560 with Chad Mourning
//Assignment: Homework 1
//Ohio University


#include <string>
#include "header.h"

using namespace std;

int main(int argc, char* argv[]) //s1 is the old string, s2 is the string to replace it
{
  WordChange w;
  string s1=argv[1];
  string s2=argv[2];
  
  w.set_initial(s1);
  w.set_post(s2);

  w.change_file();

  return 0;
}
