#include<stdio.h> 

int main()
{
	int n,i;
	double t=0,T=0,sum;
	double min=10086,max=0;
	scanf("%d ",&n);
	
	for(i=1;i<=n;i++){
		scanf("%lf ",&t);
		T=t*1.8+32;
		printf("%.1f ",T);
		if(i%5==0){
			printf("\n");
		}
		sum+=T;
		if(min>T)
		min=T;
		if(max<T)
		max=T;
	}
	
	printf("\n");
	printf("%.1f %.1f %.1f",min,max,sum/n);
	return 0;
}
