#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student{
  private:
    //attributes
    string id; //student identifier
    string name; //student name
    string major; //student major
    double gpa; //student gpa

  public:
    //methods
    Student(); //default constructor
    Student(string, string, string, double); //constructor
    void setId(string); //setter id
    void setName(string); //setter name
    void setMajor(string); //setter major
    void setGpa(double); //setter gpa
    string getId(); //getter id
    string getName(); //getter name
    string getMajor(); //getter major
    double getGpa(); //getter gpa
    bool lessThan(Student*); //lessThan function prototype
    void print();
};
#endif
