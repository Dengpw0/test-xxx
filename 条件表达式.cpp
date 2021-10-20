#include<stdio.h>
int main()
{
	int a,b,c,sum;
	int d=10;
	scanf("%d %d %d",&a,&b,&c);
	sum= c>d ? a-b:b-a;
	printf("%d",sum); 
	return 0;
}

//三目运算符：条件 ? 结果1 : 结果2 
//对于条件表达式b ? x : y，先计算条件b，然后进行判断。如果b的值为true，运算结果为x的值；否则，运算结果为y的值。
