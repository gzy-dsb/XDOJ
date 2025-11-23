#include<stdio.h> 

int main()
{
	int n,x,i;
	double sum;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		sum+=x;
	}
	printf("%.2f",sum/n);
	
	return 0;
}
