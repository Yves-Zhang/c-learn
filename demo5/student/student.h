#ifndef Student_H_
#define	Student_H_

#include <iostream>
#include <string>

#include "../person/person.h"

using namespace std;


class Student:public Person
{
	public:
		Student();
		Student(string, int, int, string, string);
		void introduceFamily();
};

#endif