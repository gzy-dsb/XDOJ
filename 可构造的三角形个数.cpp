#include<stdio.h> 
#include<stdlib.h>

int judge(int x,int y,int z){
	int ret=0;
	if(x+y>z&&x+z>y&&y+z>x){
		ret=1;
	}
	return ret;
}

int main()
{
	int n;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int cnt=0;
	for(i=2;i<n;i++){
		if(judge(a[i-2],a[i-1],a[i])==1){
			cnt+=1;
		} 
	}
	printf("%d",cnt) ;
	return 0;
}
