#include<stdio.h> 
#include<math.h>

int j(double x){
	int ret=1,i;
	for(i=x;i>1;i--){
		ret*=i;
	}
	return ret;
}

int main()
{
	int n;
	double x;
	scanf("%d %lf",&n,&x);
	
	double i,fx=0;
	for(i=0;i<n;i++){
		fx+=pow(x,2*i+1)*pow(-1,i)/j(2*i+1);
	}
	printf("%.4f",fx);
	return 0;
}
