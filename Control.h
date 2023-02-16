#ifndef CONTROL_H
#define CONTROL_H

//library of the control header file to link with the school and view file
#include "School.h"
#include "View.h"

//Control class that controls the classes and initializes students and courses in the school, and allows user to do inputs from there to print or whatever.
//The control class is linked to the school and view file

class Control
{
//private members
	private:
		View view;

//public functions
	public:
		Control();//defult constructor
		void launch();//the launch function which controls the whole program
		void initStudents(School* sch);//Initialize students data
		void initCourses(School* sch);//Initialize courses data

};

#endif
