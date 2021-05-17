#ifndef Material_H
#define Material_H

#include <iostream>
#include <string>

using namespace std;

class Material
{
	private:
		string name;
		string home;
		string type;
	public:
		Material();
		Material(string, string, string);
		~Material();
	public:
		void detail();
};

#endif