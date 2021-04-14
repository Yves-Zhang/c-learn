#ifndef Person_H_
#define Person_H_

#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		string tName;
		int tAge;
		int tGender;
		string gender;
	public:
		Person();//空的构造函数
		Person(string, int, int, string, string);//默认参数的构造函数
		void sayHello(void);
		string whoFather();
		string whoMother();
	protected:
		string father;
		string mother;
};

#endif