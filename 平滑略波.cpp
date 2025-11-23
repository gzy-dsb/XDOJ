#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int n,i;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	if(n==1){
		printf("%d",a[0]);
	}else if(n==2){
		printf("%d %d",(a[0]+a[1])/2,(a[0]+a[1])/2);
	}else{
		printf("%d ",(a[0]+a[1]+a[2])/3);
		for(i=1;i<n-1;i++){
			printf("%d ",(a[i-1]+a[i]+a[i+1])/3);
		}
		printf("%d",(a[n-3]+a[n-2]+a[n-1])/3);
	}
	
	return 0;
}
