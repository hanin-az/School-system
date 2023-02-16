#ifndef STATARRAY_H
#define STATARRAY_H

#define MAX_ARR 150
#include "Course.h"

class StatArray{
  private:
    //attributes
    Course *courseArr[MAX_ARR]; //pointer to Course object
    int size;

  public:
    //methods
    StatArray();//default constructor
    // StatArray(Course*, int); //constructor
    void print();//print data
    void add(Course*);//adding course to StatArray
    bool find(int, Course**); //finding the course
};
#endif
