#include<stdio.h>

int main() 
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int small=(a<b)?a:b;
	int big=(a>b)?a:b;
	int i,max;
	for(i=small;i<=big;i++){
		if(i%c==0){
			max=i;
		}
	}
	printf("[%d,%d] %d",small,big,max);
	return 0;
}
