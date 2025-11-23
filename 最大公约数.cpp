#include<stdio.h> 

int main()
{
	int a,b;
	int GCD;
	int i;
	scanf("%d %d",&a,&b);
	
	if(a*b==0){
	GCD=(a>b)?a:b;
	}else{
		for(i=1;i<=a&&i<=b;i++){
			if(a%i==0&&b%i==0)
			GCD=i;
		} 
	}
	
	printf("%d",GCD);
	
	return 0;
}
