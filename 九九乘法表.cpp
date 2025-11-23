#include<stdio.h> 

int main(){
	int mode,n;
	scanf("%d %d",&mode,&n);
	
	int i,j;
	if(mode==0)
	    i=1;
	else
	i=n;

	for(i=i;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}    
	return 0;
}
