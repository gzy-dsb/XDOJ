#include<stdio.h> 

int main()
{
	int N,A,B,x,cnt;
	scanf("%d %d %d",&N,&A,&B);
	
	for(int i=1;i<=N;i++){
		scanf("%d",&x);
		if(x>=A&&x<=B)
		cnt++; 
	} 
	printf("%d",cnt);
	return 0;
}
