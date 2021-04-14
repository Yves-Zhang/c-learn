#include <iostream>
#include <string>

#include "tools/tools.h"

int main(void){
	Tools tools = Tools("zhangsan");
	tools.say();

	cout<<"------"<<endl;
	
	return 0;
};