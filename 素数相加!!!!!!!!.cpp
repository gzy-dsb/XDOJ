#include<stdio.h> 
#include<math.h> 

int main()
{
	int x,i,n,sum=2;
	scanf("%d",&x);
	if(!(x>1&&x<=100000)){
	printf("0");
	}else{
	for(i=3;i<=x;i+=2){
		for(n=2;n<sqrt(i);n++){
			if(i%n==0)
			break;
		}
		if(n==int(sqrt(i))+1)
		sum+=i;
	}
	printf("%d",sum);
}
	
	
	return 0;
}
