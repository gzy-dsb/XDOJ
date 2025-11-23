#include<stdio.h> 
#include<stdlib.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	int i=0,j=0,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	if(n%2==1){
		printf("%d Odd %d",sum,a[(n-1)/2]);
	}else{
		printf("%d Even %.2f",sum,a[n/2]/2.0+a[n/2-1]/2.0);
	}
	return 0;
}
