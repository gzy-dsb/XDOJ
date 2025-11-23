#include<stdio.h> 

int main()
{
	int number;
	float sum=0;
	int count=0;
	
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	printf("%f",sum/count);
	
	return 0;
}
