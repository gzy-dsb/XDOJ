#include<stdio.h> 
#include<math.h>
int main()
{
	int x,i;
	scanf("%d",&x);
	
	if(int(sqrt(x))==sqrt(x)){
		printf("%d",int(sqrt(x)));
	}else{
		printf("no");
	}
	return 0; 
}
