#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,i,j;
	scanf("%d",&m);
	int **a=(int**)malloc(m*sizeof(int*));//分配行指针空间（即数组有多少行） 
	
	for(i=0;i<m;i++){
		a[i]=(int*)malloc(m*sizeof(int));//为每一行分配列空间 
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int *sum=(int*)calloc(2*m+2,sizeof(int));
	int k=0;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			sum[k]+=a[i][j];
		}
		k++;
	}//同一行相加 
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			sum[k]+=a[j][i];
		}
		k++;
	}//同一列相加 
	
	for(i=0,j=0;i<m;i++,j++){
		sum[2*m]+=a[i][j];
	}
	
	for(i=0,j=m-1;i<m;i++,j--){
		sum[2*m+1]+=a[i][j];
	}
	
	int t;
	for(i=0;i<2*m+2;i++){
		for(j=i;j<2*m+2;j++){
			if(sum[j]>sum[i]){
				t=sum[i];
				sum[i]=sum[j];
				sum[j]=t;
			}
		}
		printf("%d ",sum[i]);
	}
	
	free(a);
	free(sum);
	
	return 0;
}
