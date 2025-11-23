#include<stdio.h> 

int main()
{
	int i,j,t,sum=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&t);
			if(i==j){
				sum+=t;
			}
		}
	}
	
	printf("%d",sum);
	return 0;
}
