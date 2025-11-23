#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	int i; 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int sum=a[0],max=a[0];
	for(i=1;i<n;i++){
		if(a[i]==a[i-1]){
			sum+=a[i];
		}else{
			sum=a[i];
		}
		max=(sum>max)?sum:max;
	}
	printf("%d",max);
	return 0;
}
