#include<stdio.h> 

int qhs(int x){
	int sum=0,i;
	for(i=1;i<x;i++){
		if(x%i==0)
		sum+=i;
	}
	return sum;
}
void num(int x){
	int n=0,i;
	for(i=1;i<x;i++){
		if(x%i==0)
		n+=1;
	}
	printf("%d ",n);
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(qhs(a)==b&&qhs(b)==a){
		printf("yes ");
	}else{
		printf("no ");
	}
	
	num(a);
	num(b);
	
	return 0;
}
