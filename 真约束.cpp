#include<stdio.h> 

int qhs(int x){
	int sum=0,i;
	for(i=1;i<x;i++){
		if(x%i==0)
		sum+=i;
	}
	return sum;
}
int num(int x){
	int n=0,i;
	for(i=1;i<x;i++){
		if(x%i==0)
		n+=1;
	}
	return n;
}

int main()
{
	int i,n,m;
	scanf("%d %d",&n,&m);
	
	for(i=n;i<=m;i++)
	if(qhs(qhs(i))==i&&i<=qhs(i)&&qhs(i)<=m){
		printf("%d %d,%d %d\n",i,num(i),qhs(i),num(qhs(i)));
	}
	
	return 0;
}
