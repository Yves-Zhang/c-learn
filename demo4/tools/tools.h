#ifndef Tools_H_
#define Tools_H_

#include <iostream>
#include <string>

using namespace std;

class Tools
{
	private:
		string tName;
	public:
		Tools();//空的构造函数
		Tools(string);//默认参数的构造函数
		void say(void);
};

#endif