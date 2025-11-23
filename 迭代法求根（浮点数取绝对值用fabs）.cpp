#include<stdio.h> 
#include<math.h>
int main()
{
	double x=1,a,old;
	scanf("%lf",&a);
	do{
	old=x; 
	x=(x+a/x)/2;
}while(fabs(x-old)>=1e-5);

	printf("%.5f",x);
	return 0;
}
