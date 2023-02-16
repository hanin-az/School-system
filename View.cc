#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

#include "View.h"

void View::showMenu(int& choice)//menu of the program
{
  cout << endl << endl;
  cout << "What would you like to do:"<< endl;
  cout << "  (1) Print students" << endl;
  cout << "  (2) Print courses" << endl;
  cout << "  (3) Print all courses taken" << endl;
  cout << "  (4) Print courses taken by student" << endl;
  cout << "  (5) Add course taken by student" << endl;
  cout << "  (0) Exit" << endl<<endl;

  cout << "Enter your selection: ";
  cin >> choice;
  if (choice == 0)
    return;

  while (choice < 1 || choice > 5) {
    cout << "Enter your selection: ";
    cin >> choice;//get the choice from the user
  }

}

void View::printStr(string str)
{
  cout << str;
}//output a string

void View::readInt(int& n)
{
  cin >> n;
}//get an integer input

void View::readStr(string& str)
{
  cin >> str;
}//get a string input
