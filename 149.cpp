#include<stdio.h> 

int main()
{
	int n;
	scanf("%d",&n);
	double x=1;
	double t=1;
	double sum,i;
	
	for(x=x;x<=n;x++){
		sum+=(x/(2*x-1))*t;//2*x-1ÎóÐ´³É2x-1 
		t*=-1;
	}
	printf("%.3f",sum);
	return 0;
}
