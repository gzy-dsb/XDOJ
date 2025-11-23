#include<stdio.h> 
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n<100||n>999){
		printf("-1");
	}else{
		if(n==pow(n/100,3)+pow(n/10%10,3)+pow(n%10,3)){
			printf("YES");
		}else{
			printf("NO"); 
		}
	}
	return 0;
}
