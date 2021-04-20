#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main(void){

	cout<<"请输入两个数字："<<endl;
	int a;
	int b;

	cin>>a>>b;

	cout<<a+b<<endl;

	int count = 100;

	while (count > 0)
	{
		count -= 1;
		cout<<count<<endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}

	return 0;
}