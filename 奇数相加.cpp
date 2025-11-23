#include<stdio.h> 

int main()
{
	int x;
	scanf("%d",&x);
	int sum=0;
	
	while(x){
		if(x%2==1){
			sum+=x;
		}
		scanf("%d",&x); 
	}
	printf("%d",sum);
	return 0;
}
