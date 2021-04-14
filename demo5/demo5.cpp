#include <iostream>
#include <string>

#include "person/person.h"
#include "student/student.h"

int main(void){
	Person p = Person("大头", 5, 1, "小头爸爸", "王妈妈");
	p.sayHello();

	Student s = Student("小红", 5, 2, "小红爸爸", "小红妈妈");
	s.introduceFamily();
	return 0;
};