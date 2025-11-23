#include<stdio.h> 

int main()
{
	int n,i,x=0,sum=0,min=0,cntmin=1;
	scanf("%d",&n);
	
	for(i=1;i<=(n+1);i++){
		scanf(" %d",&x);
		sum+=x;
		if(min>x){
		min=x;
		cntmin=i-1;
	}
	}
	printf("%d %d",sum,cntmin);
	return 0;
}
