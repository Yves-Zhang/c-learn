#include <iostream>
#include "Sales_item.h"

int main(void)
{
	
	Sales_item book1 = Sales_item("0-201-78345-x", 112, "C++ 从入门到放弃");
	Sales_item book2 = Sales_item("0-201-78346-x", 122, "Node.js 从入门到放弃");
	Sales_item book3 = Sales_item("0-201-78347-x", 142, "C 从入门到放弃");
	Sales_item book4 = Sales_item("0-201-78348-x", 162, "java 从入门到放弃");
	Sales_item book5 = Sales_item("0-201-78349-x", 118, "python 从入门到放弃");

	Sales_item* arr[5] = {&book1, &book2, &book3, &book4, &book5};

	cout<< arr[0] <<endl;

	int len = sizeof(arr)/sizeof(arr[0]);

	cout<< len <<endl;

	for (int i = 0; i < len; i++)
	{
		arr[i]->getSaleInfo();
	}

	return 0;
}