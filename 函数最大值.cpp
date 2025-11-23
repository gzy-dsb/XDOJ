#include<stdio.h>

int main()
{
	double a;
	scanf("%lf",&a);
	
	double fx,i,max=0;
	for(i=0;i<=10;i+=0.0001){
		fx=-i*i*i+a*i*i;
		max=(fx>max)?fx:max;
	}
	
	printf("%.2f",max);
	return 0;
}
