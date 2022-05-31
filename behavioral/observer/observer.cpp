// observer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Observer.h"
#include "Teacher.h"
#include "Student.h"
int main()
{
	Teacher* teacher = new Teacher();
	Student* s1 = new Student("Tom");
	Student* s2 = new Student("John");
	Student* s3 = new Student("MAry");
	teacher->attach(s1);
	teacher->attach(s2);
	teacher->attach(s3);

	//teacher->notify("hello");

	teacher->detach(s2);
	teacher->notify("hello");

}
