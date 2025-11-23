#include<stdio.h> 

int main()
{
	int n,i;
	scanf("%d",&n);
	int judge=1;
	int t=n*n; 

	for(i=n;i>0;i/=10,t/=10){
		if(t%10!=i%10){
			judge=0;
			break;
		}
	}
	
	printf("%d %d",n,judge);
}
