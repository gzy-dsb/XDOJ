#include<stdio.h> 

int main()
{
	int x,sum;
	scanf("%d",&x);
	
	while(x>0){
		sum+=(x%10);
		x/=10;
	}
	
	printf("%d",sum);
	return 0;
}//¹ËÖÇĞùÊÇÉµ±Æ 
