#include<stdio.h> 

int main()
{
	int x;
	int a,b,c;
	
	scanf("%d",&x);
	
	a=x%10;//¸öÎ» 
	b=x/10%10;
	c=x/100;

	printf("%d",a+b+c);
	
	return 0;
}

