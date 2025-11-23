#include<stdio.h>
#include<stdlib.h>
 
int main() 
{
	int n;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	int i,k;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int sum=0,max=a[0];
	for(i=0;i<n;i++){
			for(k=i;k<n;k++){
				sum+=a[k];
				 max=(sum>max)?sum:max;
			}
			sum=0; 
	}
	printf("%d",max);
	return 0;
}
