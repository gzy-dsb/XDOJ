#include<stdio.h> 
#include<stdlib.h> 
int main()
{
	int n,i;
	scanf("%d",&n);
	
	int *a=(int*)malloc(n*sizeof(int));
	int *b=(int*)malloc((n-2)*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
		if(i>=2){
			b[i-2]=a[i]-2*a[i-1]+a[i-2];
		}
	}
	printf("\n");
	
	for(i=0;i<n-2;i++){
		printf("%d ",b[i]);
	}
	
	return 0;
}
