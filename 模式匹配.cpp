#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n) ;
	int *a=(int*)malloc(n*sizeof(int));
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int cnt=0;
	for(i=2;i<n;i++){
		if(a[i-2]==3&&a[i-1]==5&&a[i]==7){
			cnt+=1; 
		}
	}
	
	printf("%d",cnt);
	return 0;
}
