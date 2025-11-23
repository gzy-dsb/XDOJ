#include<stdio.h> 

int main() 
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	int sum=n,left=n;
	while(left>=k){
		sum+=left/k;
		left=left/k+left%k;	
	}
	printf("%d",sum);
	return 0;
}
