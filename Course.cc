#include <iostream>
#include <string>
#include <iomanip>
#include "Course.h"
using namespace std;

Course::Course(){
  idCourse = 0;
  subject = "";
  code = 0;
  section = '\0';
  term = "";
  instructor = "";
} //default constructor


Course::Course(int myIdCourse, string mySubject, int myCourse, char mySection, string myTerm, string myInstructor){
  idCourse = myIdCourse;
  subject = mySubject;
  code = myCourse;
  section = mySection;
  term = myTerm;
  instructor = myInstructor;
} //overloaded constructor

int Course::getIdCourse(){
  return idCourse;
} //getter id


string Course::getCourseCode(){
  return subject + to_string(code);
} //return function prototype that returns the concatenated course code


bool Course::lessThan(Course* otherCourse){
  if(subject < otherCourse->subject)
  {
    return true;
  }//comparing subject

  else if(subject == otherCourse->subject)
  {
    if(code < otherCourse->code)
    {
      return true;
    }//comparing course code
    else if(code == otherCourse->code)
    {
      if(term < otherCourse->term){
       return true;
     }//comparing term

     else if(term == otherCourse->term)
     {
       if(section < otherCourse->section)
       {
         return true;
       }
       else{
         return false;
       }//comparing section
     }
     else
     {
       return false;
     }
    }
    else
    {
      return false;
    }
  }
  else
  {
    return false;
  }
} //lessThan function prototype


void Course::print(){
  const char separator = ' ';
  const int columnWidth = 8;
  cout << left << setw(columnWidth) << setfill(separator) << idCourse;
  cout << left << setw(15) << setfill(separator) << this->getCourseCode();
  cout << left << setw(columnWidth) << setfill(separator) << section;
  cout << left << setw(columnWidth) << setfill(separator) << term;
  cout << left << setw(columnWidth*2) << setfill(separator) << instructor;

}//print data
