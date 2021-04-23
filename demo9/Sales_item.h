#ifndef Sale_item_H
#define Sale_item_H

#include <string>

using namespace std;

class Sales_item
{
	private:
		string ISBN;
		float prize;
		string name;

	public:
		Sales_item(string,float,string);
		~Sales_item();

	public:
		string isbn();
		void getSaleInfo();
};

#endif