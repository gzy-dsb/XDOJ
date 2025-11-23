#include<stdio.h> 

int main(){
	int x;
	scanf("%d",&x);
	
	while(x>0){
		int t=x%10;
		if(t!=0){
			printf("%d ",t);
		}
		x/=10;
	}
	return 0;
}
