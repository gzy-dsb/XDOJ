#include<stdio.h> 

int judge(int i){
		int n;
 		for(n=2;n<i;n++){//前面已经定义的不能重复定义 
			if(i%n==0)
			break;
		}
		if(n==i)
		return 6;	
	}
		
int main()
{
	int x,i=0;
	scanf("%d",&x);
	if(x==4)
		printf("2 2");
	else{
		for(i=3;i<x/2;i++){
			if(judge(i)==6&&judge(x-i)==6){
			printf("%d %d",i,x-i);
			break;
			}
		}

	}
	return 0;
}
