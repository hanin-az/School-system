#include <iostream>
#include <string>
#include <iomanip>
#include "Control.h"

using namespace std;

int main(){

  cout << "--------------------Welcome to Stras University Student Database--------------------" << endl;
  cout << endl;

  Control control;//declare a Control object
  control.launch();//call the launch function which controls the whole program

  cout << "---------------------------Thank you for using our database------------------------" << endl;
  return 0;
}
