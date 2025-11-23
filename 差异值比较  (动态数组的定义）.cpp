#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int i,m;
	scanf("%d",&m); 
	double *a=NULL; 
	a=(double*)malloc(m*sizeof(double));
	double min=0,max=0;
	
	for(i=0;i<m;i++){
		scanf(" %lf",&a[i]);
		if(i==1){
			min=a[i]-a[i-1];
			max=a[i]-a[i-1];
		}
		if(i>=2){
			max=(a[i]-a[i-1]>max)?a[i]-a[i-1]:max;
			min=(a[i]-a[i-1]<min)?a[i]-a[i-1]:min;
		}
	}
	printf("%.2f %.2f",max,min);
	return 0;
}
