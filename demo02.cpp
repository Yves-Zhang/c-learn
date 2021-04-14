#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		Person(void){
			
		};
		Person(string name, int age, int gender, string father, string mather)
		{
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->father = father;
			this->mather = mather;
		};

	public:
		string name;
		int age;
		int gender;
	
	private:
		string father;
		string mather;
		friend class Student;
};

class Student
{
	public:
		Student(int enrollmentYear, Person p){
			this->enrollmentYear = enrollmentYear;
			this->studentInfo = p;
		};

	public:
		int enrollmentYear;
		Person studentInfo;

	public:
		void report(void){
			string gender;

			if(this->studentInfo.gender == 1){
				gender = "男";
			}else if(this->studentInfo.gender == 2){
				gender = "女";
			}else {
				gender = "未知";
			}

			cout<<"该学生的信息为："<<endl;
			cout<<"姓名："<<this->studentInfo.name<<endl;
			cout<<"年龄："<<this->studentInfo.age<<endl;
			cout<<"性别："<<this->studentInfo.gender<<endl;
			cout<<"父亲："<<this->studentInfo.father<<endl;
			cout<<"母亲："<<this->studentInfo.mather<<endl;
			cout<<"入学年份为："<<this->enrollmentYear<<endl;
		}
};

int main(void){
	Person p = Person("max", 6, 1, "wangwu", "shufen");
	Student s = Student(2021, p);

	s.report();

	return 0;
};