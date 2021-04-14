#include <iostream>

using namespace std;

int main(void){
	// 短整型 -32768 32767
	short num = 32767;

	// 短整型
	int num1 = 32768;

	// 长整型
	long num2 = 32768;

	// 长长整型
	long long num3 = 32768;

	cout<<num<<endl;
	cout<<num1<<endl;
	cout<<num2<<endl;
	cout<<num3<<endl;

	cout<<"short 占用的空间： "<<sizeof(short)<<endl;
	cout<<"int 占用的空间： "<<sizeof(int)<<endl;
	cout<<"long 占用的空间： "<<sizeof(long)<<endl;
	cout<<"long long 占用的空间： "<<sizeof(long long)<<endl;

	cout<<"\n \n 实型/浮点型"<<endl;
	cout<<"\n 单精度"<<endl;
	float f1 = 3.14f; // 加上f 表示是单精度，不加默认是 双精度，会先做一次转换 转换成单精度
	cout<<"f1: "<<f1<<endl;

	cout<<"\n 双精度"<<endl;
	double f2 = 3.1415926; // 默认情况下显示6位有效数字
	double f3 = 314.15926; // 默认情况下显示6位有效数字
	cout<<"f2: "<<f2<<endl;
	cout<<"f3: "<<f3<<endl;

	int f1size = sizeof(f1);
	int f2size = sizeof(f2);
	int f3size = sizeof(f3);

	cout<<"float size: "<<f1size<<endl;
	cout<<"double size: "<<f2size<<endl;

	cout<<"\n 科学记数法"<<endl;
	float e1 = 3e2; // 3*10^2
	float e2 = 3e-2; // 3*0.1^2
	cout<<"e1: "<<e1<<endl;
	cout<<"e2: "<<e2<<endl;

	cout<<"\n 字符类型"<<endl;
	char a = 'a'; //用单引号 只能写一个字符 ASCII 字符
	int sizeChar = sizeof(char);

	cout<<"a: "<<a<<endl;
	cout<<"char 的size: "<<sizeChar<<endl;

	cout<<"char a 强转int: "<<(int)a<<endl;
	cout<<"char A 强转int: "<<(int)'A'<<endl;
}