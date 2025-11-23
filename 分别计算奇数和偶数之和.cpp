#include<stdio.h> 

int main() 
{
	int n,i;
	scanf("%d",&n);
	
	int sum1=0,sum2=0;
	for(i=1;i<=n;i+=2){
	sum1+=i;
	}
	
	for(i=2;i<=n;i+=2){
	sum2+=i;	
	}
	
	
	printf("%d %d",sum1,sum2);
	return 0;
}
