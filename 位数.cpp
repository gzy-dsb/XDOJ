#include<stdio.h> 

int main()
{
	int x,cnt=1;
	scanf("%d",&x);
	
	for(x=x;x>=10;x/=10){
		cnt+=1;
	}
	printf("%d",cnt);
	
	return 0;
}
