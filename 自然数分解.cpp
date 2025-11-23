#include<stdio.h> 

int main()
{
	int n,x;
	scanf("%d",&n);
	
	for(x=1;;x+=2){
	if(x==n*n-n+1){
		break;
	}
}
	
	for(int i=1;i<=n;i++){
		printf("%d ",x);
		x+=2;
	}
	printf("\n");
	
	return 0;
}
