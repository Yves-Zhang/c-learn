#include <iostream>
#include <string>

using namespace std;

int main(void){
	int i = 17;
	string name = "zhangsan";
	int l = 213;

	int& r = i;
	int& n = l;

	cout<<name<<endl;
	cout<<r<<endl;
	cout<<n<<endl;

	int var_runoob = 12;
	int *p;
	p = &var_runoob;

	printf("var_runoob 变量的地址是： %p\n", p);

	return 0;
}