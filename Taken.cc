#include <iostream>
#include <string>
#include <iomanip>
#include "Taken.h"

using namespace std;

Taken::Taken(){
  ptrStudent = nullptr;
  ptrCourse = nullptr;
  grade = "";
} //ddefault constructor

Taken::Taken(Student* myptrStudent, Course* myptrCourse, string myGrade){
  ptrStudent = myptrStudent;
  ptrCourse = myptrCourse;
  grade = myGrade;
} //constructor


Student* Taken::getStudent(){
  return ptrStudent;
} //get student pointer


Course* Taken::getCourse(){
  return ptrCourse;
}//get course pointer


string Taken::getGrade(){
  return grade;
}//get grade


void Taken::print(){

  const char separator = ' ';
  const int columnWidth = 16;

  cout << left << setw(columnWidth) << setfill(separator) << ptrStudent->getName();
  cout << left << setw(columnWidth) << setfill(separator) << ptrCourse->getCourseCode();
  cout << left << setw(columnWidth) << setfill(separator) << grade;
}//print Taken information
