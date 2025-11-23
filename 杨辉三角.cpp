#include<stdio.h> 
#include<stdlib.h> 

int main()
{
	int i,j,n;
	scanf("%d",&n);
	int **a=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++){
		a[i]=(int*)calloc(n,sizeof(int));
		}
		
	for(i=0;i<n;i++){
		a[i][0]=1;
	}
	
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
