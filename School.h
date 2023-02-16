#ifndef SCHOOL_H
#define SCHOOL_H

#include "DynArray.h"
#include "StatArray.h"
#include "Taken.h"
#include "Student.h"
#include "Course.h"
#include <string>

#define MAX_ARR 150

class School{
    private: //attributes
      string name;
      DynArray collectionOfStu; //a pointer to a DynArray object
      StatArray collectionOfCrs; //a pointer to a StatArray object
      Taken *collecTaken[MAX_ARR]; //a pointer to a Taken object
      int numTaken;

      
    public: //methods
      School(); //default constructor
      School(string); //overloaded constructor
      ~School(); //destructor
      void addStu(Student*);// add a student to the DynArray object
      void addCourse(Course*); //add a course to the StatArray object
      void addTaken(string, int, string); // add a Taken object to the taken list
      void printStudents();
      void printCourses();
      void printTaken();
      void printTakenByStu(string);//print the courses taken by a given student

};
#endif
