#include<stdio.h> 

int main()
{
	int i,k,n,cnt=0;
	scanf("%d %d",&n,&k);
	
	int t;
	for(i=0;i<n;i++){
		scanf(" %d",&t);
		if(t==k){
			printf("%d ",i);
			cnt++;
		}
	}
	if(cnt==0){
		printf("-1");
	}
	
	return 0;
}
