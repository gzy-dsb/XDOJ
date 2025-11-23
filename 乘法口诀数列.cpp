#include<stdio.h> 
#include<stdlib.h>

int main() 
{
	int b,c,n,i,mou=2;
	scanf("%d %d %d",&b,&c,&n);;
	int *a=(int*)malloc(n*sizeof(int));
	
	a[0]=b,a[1]=c;
	
	for(i=0;i<n&&mou<n;i++){
		int t=a[i]*a[i+1];	
		if(t<10){
			a[mou]=t;
			mou++;
		}else{
			a[mou]=t/10;
			if(mou+1<n){
			a[mou+1]=t%10;
		}
		mou+=2;
	} 
}
	
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	} 
	
	return 0;
}
