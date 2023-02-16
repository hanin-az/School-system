#include <iostream>
#include <string>
#include <iomanip>
#include "Student.h"
using namespace std;

Student::Student(){
  id = "";
  name = "";
  major = "";
  gpa = 0.0;
} //default constructor

Student::Student(string myId, string myName, string myMajor , double myGpa){
  id = myId;
  name = myName;
  major = myMajor;
  gpa = myGpa;
} //parameter constructor


void Student::setId(string myId){
  id = myId;
} //set ID


void Student::setName(string myName){
  name = myName;
} //set name


void Student::setMajor(string myMajor){
  major = myMajor;
} //set major


void Student::setGpa(double myGpa){
  gpa = myGpa;
} //set gpa


string Student::getId(){
  return id;
} //get ID


string Student::getName(){
  return name;
} //get name


string Student::getMajor(){
  return major;
}//get major


double Student::getGpa(){
  return gpa;
} //get gpa


bool Student::lessThan(Student* otherStudent){
  return name < otherStudent->name;
} //retuning name lesThan.


void Student::print(){

  const char separator = ' ';
  const int columnWidth = 16;

   cout << left << setw(columnWidth) << setfill(separator) << id;
   cout << left << setw(columnWidth*2) << setfill(separator) << name;
   cout << left << setw(columnWidth*2) << setfill(separator) << major;
   cout << left << setw(columnWidth) << setfill(separator) << gpa;

}//print the data of the object
