#include<stdio.h> 

int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	
	int m=(a>b)?a:b;
	for(i=m;;i++){
		if(i%a==0&&i%b==0)
		break;
	}
	printf("%d",i);
	
	return 0;
	
}
