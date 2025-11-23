#include<stdio.h> 

int f(int x){
	int ret=0;
	for(x=x;x>0;x/=10){
		ret+=x%10;
	}
	return ret;
}

int main(){
	int x;
	scanf("%d",&x);
	
	int result=x;
	while(result>=10){
		result=f(result);
	}
	printf("%d",result);
	return 0;
}
