#include<stdio.h> 

int max(int a,int b ){
	int m=(a>b)?a:b;
	return m;
}

int min(int a,int b ){
	int m=(a<b)?a:b;
	return m;
}

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d %d %d %d",min(min(a,b),min(c,d)),min(max(min(a,b),min(c,d)),min(max(a,b),max(c,d))),
	max(max(min(a,b),min(c,d)),min(max(a,b),max(c,d))),max(max(a,b),max(c,d)));
	return 0;
}
