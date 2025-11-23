#include<stdio.h> 

int main() 
{
	int x,i;
	scanf("%d",&x);
	
	for(i=2;i<=x;i*=2){}
	
	if(x%2==1){
		printf("-1");
	}else{
	for(i=i/2;i>=2;i/=2){
		while(x>=i){
			printf("%d ",i);
			x-=i;
		}
		}
	}
	return 0;
}
