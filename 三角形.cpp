#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("不是三角形"); 
	}else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
		int p=(a+b+c)/2; 
		printf("%d",int(sqrt(p*(p-a)*(p-b)*(p-c))));
	}else{
		printf("其他三角形");
	}
	
	return 0;
}
