#include<stdio.h> 

int main()
{
	int a,b;
	int max,min; 
	scanf("%d %d",&a,&b);
	
	max=(a>=b)?a:b;
	min=(a<=b)?a:b;
	
	printf("%d %d",max%10,min*min);
	
	return 0;
}
