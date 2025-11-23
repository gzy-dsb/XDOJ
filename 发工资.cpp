#include<stdio.h>

void change(int x,int bi){
	printf("%d ",x/bi);
}

int main()
{
	int x;
	scanf("%d",&x) ;
	
	change(x,100);
	x%=100;
	change(x,50);
	x%=50;
	change(x,20);
	x%=20;
	change(x,10);
	x%=10;
	change(x,5);
	x%=5;
	change(x,1);
	
	return 0;
}
