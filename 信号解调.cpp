#include<stdio.h> 
#include<stdlib.h> 

int main()
{
	int n;
	scanf("%d",&n);
	int *x=(int*)malloc(n*sizeof(int));
	int *y=(int*)malloc(n*sizeof(int));
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	
	for(i=0;i<n;i++){
		if((x[i]-4)*(x[i]-4)+(y[i]-4)*(y[i]-4)<(x[i]+4)*(x[i]+4)+(y[i]+4)*(y[i]+4)){
			printf("1 ");
		}else{
			printf("2 ");
		}
	}
	return 0;
}
