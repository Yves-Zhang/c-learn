#include <iostream>
#include <string>

#include "plusFuc/plusFuc.cpp"

using namespace std;

template<typename T>

void say(T &a){
	cout<<a<<endl;
}

int main(void){
	cout<<"hello template"<<endl;
	int a = 1;
	say(a);

	int min = 10;
	int max = 20;

	int ret = plusFuc(1,2);
	cout<<ret<<endl;
	
	system("pause");
  return 0;
}