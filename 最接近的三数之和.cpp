#include<stdio.h> 
#include<stdlib.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	int i,j,k;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int target;
	scanf("%d",&target);
	
	int min=abs(a[0]+a[1]+a[2]-target),record,sum;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++) {
				sum=a[i]+a[j]+a[k];
				if(abs(sum-target)<=min){
					min=abs(sum-target);
					record=sum;
				} 
			
			}
		}
	}
	
	printf("%d",record);
	return 0;
}
