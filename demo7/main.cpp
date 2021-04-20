#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main(void){
	int sum = 0;
	int value = 0;

	while (cin>>value)
	{
		sum += value;

		cout<<"和为："<<sum<<endl;
	}

	return 0;
}