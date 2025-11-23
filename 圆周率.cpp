#include<stdio.h> 

int main()
{
	int n,t=1;
	double pi,x;
	scanf("%d",&n);
	
	for(x=1;x<=n;x++){
		pi+=4*(1.0/(2*x-1))*t;
		t*=-1;
	}
	printf("%.6f",pi);
	return 0;
}
