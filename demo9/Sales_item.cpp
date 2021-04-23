#include "Sales_item.h"

#include <iostream>
#include <string>

using namespace std;

Sales_item::Sales_item(string ISBN, float prize, string name)
{
	this->ISBN = ISBN;
	this->prize = prize;
	this->name = name;
}

Sales_item::~Sales_item()
{
	// cout<<"执行析构函数~"<<endl;
}
 
string Sales_item::isbn()
{
	return this->ISBN;
}

void Sales_item::getSaleInfo(){
	cout<<endl;
	cout<<"********************************"<<endl;
	cout<<"* "<<"ISBN :  "<<this->ISBN<<endl;
	cout<<"* "<<"prize:  "<<this->prize<<"$"<<endl;
	cout<<"* "<<"name :  "<<this->name<<endl;
	cout<<"********************************"<<endl;
	cout<<endl;
}