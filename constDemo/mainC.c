#include <stdio.h>
#include "const.c"

const int gnum = 101; // 这是一个全局变量 储存在 全局区，用const修饰 所以放在文字常量区 不可修改；

// extern const int cc;

int main(void){
	const int num = 100; // 非全局可读变量， 放在栈区 可被 内存地址间接修改

	printf("%d", num);

	int* p = (int*)&num;

	*p = 1000;

	printf("\n");

	printf("num = %d \n", num);

	int* cp = (int *)&cc;

	printf("cc = %d \n", cc);

	return 0;
}