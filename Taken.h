#ifndef TAKEN_H
#define TAKEN_H
using namespace std;

#include "Course.h"
#include "Student.h"

class Taken{
  private:
    //attributes
    Student* ptrStudent; //pointer to Student object
    Course* ptrCourse; //pointer to Course object
    string grade;

  public:
    //methods
    Taken();//default constructor
    Taken(Student*, Course*, string); //constructor
    Student* getStudent(); //getter Student
    Course* getCourse(); //getter Course
    string getGrade(); //getter grade
    void print();//print data
};
#endif
