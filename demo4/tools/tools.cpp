#include "tools.h"

Tools::Tools(){

};

Tools::Tools(string tName){
	this->tName = tName;
};

void	Tools::say(void){
	cout<<"我的名字是："<<this->tName<<endl;
};