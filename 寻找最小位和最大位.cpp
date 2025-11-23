#include<stdio.h> 

int main(){
	unsigned long x,i;
	int wei;
	scanf("%d",&x);
	int min=10,max=0;
	
	for(i=x;i>0;i/=10){
		wei=i%10;
		if(wei<min)
		min=wei;
		if(wei>max)
		max=wei;
	}
	printf("%d %d",max,min);
	return 0;
}
