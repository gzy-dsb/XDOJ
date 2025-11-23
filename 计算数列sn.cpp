#include<stdio.h> 

int main()
{
	int i,n;
	double sn=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sn+=(1+(1.0/i));
	}
	printf("%.1f",sn);
	return 0;
}
