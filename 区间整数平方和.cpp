#include<stdio.h>

int main(){
	int i,m,n;
	scanf("%d %d",&m,&n);
	int sum=0;
	
	for(i=m;i<=n;i++){
		sum+=i*i;
	}
	printf("%d",sum);
	
	return 0;
}
