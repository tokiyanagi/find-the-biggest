#include<stdio.h>
int main()
{
	int max(int x, int y);//函数声明
	int a, b, c;//声明变量
	a =1;b =2;//实际参数
	c = max(a, b);//函数调用
	printf("a与b的最大值是%d\n",c);
	return 0;
}
int max(int x,int y)//形式参数：参数类型+参数名
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return(z);
}