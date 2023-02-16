#include <iostream>
#include <string>
#include <iomanip>
#include "DynArray.h"

using namespace std;

DynArray::DynArray(){
  size = 0;
  studentArr = new Student *[MAX_ARR];
} //ddefault constructor

DynArray::~DynArray(){
  cout << "-------------------------Deleting Dynamic Array---------------------------" << endl;
  delete [] studentArr;
}//destructor


void DynArray::add(Student* myStudentArr){
  if(size > MAX_ARR-1){//cheak the capacity of the array
    cout << "Sorry you reached the maximum capacity of student!" << endl;
    return;
  }
  else{
    int position=0;
    for(; position < size; position++){
      if(myStudentArr->lessThan(studentArr[position])){ //pointer to lessThan function of Student class and adding the new course
        break;
      }
    }

    for(int i=size; i > position; i--){//increment the array size
      studentArr[i]=studentArr[i-1];
    }
    studentArr[position] = myStudentArr;
    size++;
  }
}//adding course to StatArray


bool DynArray::find(string num, Student** myStudentArr){
  for (int i = 0; i < size; i++) //loop through all students and find
  {
    if (studentArr[i]->getId() == num)
    {
      *myStudentArr = studentArr[i];
      return true;
    }
  }

  *myStudentArr = nullptr; // no entry found, make stu null and return false
  return false;
}//finding the course


void DynArray::print(){

  const char separator = ' ';
  const int columnWidth = 16;

  cout << left << setw(columnWidth) << setfill(separator) << "ID";
  cout << left << setw(columnWidth*2) << setfill(separator) << "Name";
  cout << left << setw(columnWidth*2) << setfill(separator) << "Major";
  cout << left << setw(columnWidth*2) << setfill(separator) << "GPA";

  cout << endl;
  cout << "------------------------------------------------------------------------------------" << endl;

  cout << endl;
  for(int i = 0; i < size; i++){
    studentArr[i]->print();//pointer to the print function of student class
    cout << endl;
  }
  cout << "------------------------------------------------------------------------------------" << endl;
}//printing the students information
