#include <iostream>
#include <string>
#include <iomanip>
#include "School.h"

using namespace std;

School::School(){ //default constructor
  name="";
  numTaken=0;
}

School::School(string schoolName){ //overloaded constructor
  name=schoolName;
  numTaken=0;
}

School::~School(){ //destructor
}

void School::addStu(Student* newStudents){//adding a student to the DynArray object
  collectionOfStu.add(newStudents);// a pointer to the add function of DynArray class
}

void School::addCourse(Course* newCourse){ //adding a course to the StatArray object
  collectionOfCrs.add(newCourse);//a pointer to the add function of StatArray class
}

void School::addTaken(string stuNum, int cNum, string grade){ //adding a Taken object to the Taken list
  if(numTaken > MAX_ARR-1)//check the capacity of the array
  {
    cout << "Sorry you reached the maximum capacity of data" << endl;
    return;
  }
  else{
      Student* student1;
      Course* course1;
      Taken* taken1;
      collectionOfStu.find(stuNum, &student1);//find the student
      collectionOfCrs.find(cNum, &course1);//find the course

      if(!student1)//if sudent not found
      {
        cout << "Student is not found!" << endl;

        return;
      }
      else if(!course1){
        cout << "Course is not found!" << endl;
        return;
      }
      else{//if student and course found
          taken1= new Taken(student1,course1,grade);//create a new Taken object
          collecTaken[numTaken]=taken1;
          numTaken++;

          cout << "Congratulations you are now fully regitered in Stars University!!" << endl;
        }
      }
}

void School::printStudents(){ //print the students list

  cout << "----------------------------Students list at the school---------------------------" << endl;

  collectionOfStu.print();//pointer to the print function of DynArray



}

void School::printCourses(){//print the courses list

  cout << "---------------------------Courses list--------------------------" <<endl;

  collectionOfCrs.print();//pointer to the print function of StatArray
}

void School::printTaken(){ //print Taken list

  if(numTaken == 0)
  {
    cout<<"----------------No Courses Taken yet-------------"<<endl;
  }
  else{
  cout << "-------------------Taken list----------------" << endl;
  for (int i=0; i < numTaken; i++){
    collecTaken[i]->print(); //pointer to the print function of Taken
    cout << endl;
  }
  cout << "------------------------------------------------------" << endl;
  }
}

void School::printTakenByStu(string sid){ //print the courses taken by a given student

  if(numTaken==0)
  {
    cout<<"No student be added"<<endl;
  }
  else{
    Student *sId = nullptr;
    collectionOfStu.find(sid, &sId);//find the student in DynArray list

    const char separator = ' ';
    const int columnWidth = 8;

    cout << left << setw(columnWidth) << setfill(separator) << "Name";
    cout << left << setw(columnWidth) << setfill(separator) << "ID";
    cout << left << setw(15) << setfill(separator) << "CourseCode";
    cout << left << setw(columnWidth) << setfill(separator) << "Section";
    cout << left << setw(columnWidth) << setfill(separator) << "Term";
    cout << left << setw(columnWidth*2) << setfill(separator) << "Instructor";
    cout << left << setw(columnWidth) << setfill(separator) << "Grade";

    cout << endl;

    for (int i = 0; i < numTaken; i++)
    {
      if (collecTaken[i]->getStudent()->getId() == sid){
        cout << left << setw(columnWidth*2) << setfill(separator) << collecTaken[i]->getStudent()->getName();//get the name of the student
        collecTaken[i]->getCourse()->print();//pointer to getCourse function of Taken Class, Then pointer to print function of Course class
        cout << left << setw(columnWidth) << setfill(separator) << collecTaken[i]->getGrade();//pointer to the print function of Taken
        cout <<endl;
      }
      else{
        cout << endl;
        cout<<"--------------------------Student not FOUND!!------------------------" <<endl;
        return;
      }
    }
  }
}
