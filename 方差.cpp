#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	int average=sum/n;
	int sum2=0;
	for(i=0;i<n;i++){
		sum2+=(a[i]-average)*(a[i]-average); 
	}
	int p=sum2/n;
	 
	printf("%d",p);
	 return 0;
}
