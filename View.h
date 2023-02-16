#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class View
{
  public:
    void showMenu(int&);//display the menu to the user
    void printStr(string);//print a string
    void readInt(int&);//get an integer input
    void readStr(string&);//get a string input
};

#endif
