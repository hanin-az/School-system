#ifndef COURSE_H
#define COURSE_H
using namespace std;

class Course{
private:
  //attributes
  int idCourse; //course identifier
  string subject; //course subject
  int code; //course code
  char section; //course section
  string term; //course term
  string instructor; //course instructor

public:
  //methods
  Course(); //default constructor
  Course(int, string, int, char, string, string); //constructor
  int getIdCourse(); //getter id
  string getCourseCode(); //return function prototype that returns the concatenated course code
  bool lessThan(Course*); //lessThan function prototype
  void print();//print data
};
#endif
