#include <iostream>
#include <string>
#include <iomanip>
#include "StatArray.h"

using namespace std;

StatArray::StatArray(){

  size = 0;

} //ddefault constructor

void StatArray::add(Course* myCourseArr){
  if(size > MAX_ARR-1){
    cout << "Sorry you reached the maximum capacity of courses!" << endl;
    return;
  }
  else{
    int position=0;
    for(; position < size; position++){
      if(myCourseArr->lessThan(courseArr[position])){ //pointer to lessThan function of Course class and adding the new course
        break;
      }
    }

    for(int i=size; i > position; i--){//increment the array size
      courseArr[i]=courseArr[i-1];
    }

    courseArr[position] = myCourseArr;
    size++;
  }
}//adding course to StatArray

bool StatArray::find(int id, Course** myCourseArr){

    for (int i = 0; i < size; i++)
    { // Loop through all Courses
      if (courseArr[i]->getIdCourse() == id)
      {
        *myCourseArr = courseArr[i];
        return true;
      }
    }
    *myCourseArr = nullptr; // Not found, course = null & return
    return false;
  }//finding the course

void StatArray::print(){

  const char separator = ' ';
  const int columnWidth = 8;

  cout << left << setw(columnWidth) << setfill(separator) << "ID";
  cout << left << setw(15) << setfill(separator) << "CourseCode";
  cout << left << setw(columnWidth) << setfill(separator) << "Section";
  cout << left << setw(columnWidth) << setfill(separator) << "Term";
  cout << left << setw(columnWidth) << setfill(separator) << "Instructor";

  cout << endl;
  cout << "-------------------------------------------------------------" << endl;

  for(int i = 0; i < size; i++){
    courseArr[i]->print();//a pointer to the print function of course class
    cout << endl;
  }
  cout << "-------------------------------------------------------------" << endl;
} //printing the courses information
