#include <iostream>
#include <iomanip>
#include <string>
#include "Control.h"

using namespace std;

Control::Control()//defult constructor
{
}

void Control::launch()
{
  //declaring variabels
  School* school = new School("Stars University");
  int choice = 0;
  int id;
  string studentNumber, grade;


  //call the Initialize functions of students and courses
  initStudents(school);
  initCourses(school);

  while (1)
  {
    //display the menu to the user
    view.showMenu(choice);
    if (choice == 0)
    {
      school->~School();
      break;
    }

    // students
    if (choice == 1)
    {
      school->printStudents();
    }
    //  Print courses
    if (choice == 2)
    {
      school->printCourses();
    }
    //  Print courses taken
    if (choice == 3)
    {
      school->printTaken();
    }
    //  Print courses taken by student

    if (choice == 4)
    {
      view.printStr("Please insert your student ID: ");
      view.readStr(studentNumber);
      school->printTakenByStu(studentNumber);
    }

    //  Add course taken by student
    if (choice == 5)
    {
      cout << "Please enter your data to register: " << endl;
      //getting the new information from the user
      view.printStr("Please insert your student ID: ");
      view.readStr(studentNumber);
      view.printStr("Please insert your Course ID: ");
      view.readInt(id);
      view.printStr("Please insert your Grade: ");
      view.readStr(grade);

      school->addTaken(studentNumber, id, grade);//create a new Taken object and add it to the Taken list
    }
  }
}

//Initialize the students data
void Control::initStudents(School *sch)
{

   cout << "---------------------------Initializing the students data-------------------------" << endl;

  sch->addStu(new Student("S20106245", "Hanin Alzaher", "Architecture", 2.5));
  sch->addStu(new Student("S20106566", "Aicha Sidiya", "Biology", 3.5));
  sch->addStu(new Student("S20102122", "Lamar Aljahdali", "Computer Science", 4.0));
  sch->addStu(new Student("S20102133", "Joud Kaki", "Design", 3.3));
  sch->addStu(new Student("S20102125", "Reem Alsharabi", "ECE", 3.4));
  sch->addStu(new Student("S20102022", "Layal Alsilani", "Art", 4.0));
  sch->addStu(new Student("S20104050", "Alanoud Alguthami", "Psychology", 3.75));
  sch->addStu(new Student("S20107076", "Fatma Alzahra", "Math", 3.38));
  sch->addStu(new Student("S20108090", "Layan Jaman", "Business", 2.75));
  sch->addStu(new Student("S20101013", "Jailan Aljizawi", "Physics", 2.21));
}

//Initialize the courses data
void Control::initCourses(School *sch)
{

  cout << "---------------------------Initializing the course data---------------------------" << endl;

  sch->addCourse(new Course(1, "MATH", 204, '1', "F19", "Mohamed Moussa"));
  sch->addCourse(new Course(2, "CS", 301, '3', "F19", "Helene Kanso"));
  sch->addCourse(new Course(3, "ARCH", 207, '4', "W20", "Akila Sariratie"));
  sch->addCourse(new Course(4, "Psy", 523, '1', "S20", "Mohamed Khalid"));
  sch->addCourse(new Course(5, "MKT", 110, '2', "S20", "Zain Balfagih"));
  sch->addCourse(new Course(6, "ANT", 1111, '5', "W20", "Mohamed Khalil"));
  sch->addCourse(new Course(7, "Bio", 103, '3', "F19", "Sari Sabban"));
}
