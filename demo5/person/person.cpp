#include "person.h"

Person::Person(){

};

Person::Person(string tName, int age, int gender, string father, string mother){
	switch (gender)
	{
	case 1:
		this->gender = "男";
		break;
	case 2:
		this->gender = "女";
		break;
	default:
		this->gender = "--";
		break;
	}
	this->tName = tName;
	this->tAge = age;
	this->father = father;
	this->mother = mother;
	this->tGender = gender;
};

void	Person::sayHello(void){
	cout<<"大家吼："<<endl;
	cout<<"我是："<<this->tName<<endl;
	cout<<"我是"<<this->gender<<"孩！"<<endl;
	cout<<"今年"<<this->tAge<<"岁！"<<endl;
	cout<<"------------"<<endl;
};

string Person::whoFather(){
	return this->father;
};

string Person::whoMother(){
	return this->mother;
};