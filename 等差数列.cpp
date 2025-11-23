#include<stdio.h> 
#include<stdlib.h> 

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
	}
	
	int t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	int t1,t2=a[1]-a[0];
	for(i=1;i<n;i++){
		t1=a[i]-a[i-1];
		if(t2!=t1){
			printf("no");
			break;
		}
	}
	
	if(i==n){
		printf("%d",t1);
	}
	
	return 0;
}
