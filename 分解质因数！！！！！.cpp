#include<stdio.h> 
#include<math.h>

int main()
{
	int x,i;
	scanf("%d",&x);
	
	for(i=2;i<=x;i++){
		while(x%i==0){
			printf("%d",i);
			x/=i;
			if(x!=1)
			printf("*");	
		}
	} 
	return 0;
}

