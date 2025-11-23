#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int a5=x/10000;
	int a4=x/1000%10;
	int a3=x/100%10;
	int a2=x/10%10;
	int a1=x%10;
	
	printf("%d %d %d %d %d",a5,a4,a3,a2,a1); 
	
	return 0;
}
