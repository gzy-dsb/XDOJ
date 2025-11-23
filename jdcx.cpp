#include<stdio.h> 

int main()
{
	int x;
	scanf("%d",&x);
	
	if(x%2==0&&!(x%3==0||x%5==0)){
		printf("Nice");
	}else if(x%3==0&&!(x%2==0||x%5==0)){
		printf("Good");
	}else if(x%5==0&&!(x%2==0||x%3==0)){
		printf("Best");
	}else{
		printf("Bad");
	}
	return 0;
}
