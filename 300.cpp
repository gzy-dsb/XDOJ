#include<stdio.h>

int main()
{
	int x;
	int n=1;
	scanf("%d",&x);
	
	while(x>=10){
		x/=10;
		n++;
	}
	printf("%d",n);
	
	return 0;
}
