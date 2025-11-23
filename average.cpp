#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d" ,&a,&b);
	
	double c=(a+b)/2.0;
	
	printf("%d和%d的平均数是%f",a,b,c);
	
	return 0;
}
//int,%d对应整数，double，%lf，%f对应小数，其中%lf输入，%f输出 
