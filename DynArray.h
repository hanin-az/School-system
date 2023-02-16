#ifndef DYNARRAY_H
#define DYNARRAY_H

#define MAX_ARR 150
#include "Student.h"

class DynArray{
private:
  //attributes
  Student **studentArr; //pointer to Course object
  int size;

public:
  //methods
  DynArray();//default constructor
  // DynArray(Student*, int); //constructor
  ~DynArray();//destructor
  void print();//print data
  void add(Student*);//adding course to StatArray
  bool find(string, Student**); //finding the course
};
#endif
