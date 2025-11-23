#include<stdio.h> 

int main()
{
	int x;
	scanf("%d",&x);
	
	int an,n=1;
	int sum_even=0,sum_odd=0;
	int num_even=0,num_odd=0;
	while(n++){
		an=3*(n-1)*(n-1)+2*(n-1)+1;
		if(an>100&&an%2==0&&num_even<x){
			num_even++;
			sum_even+=an;
		}else if(an>100&&an%2==1&&num_odd<x-1){
			num_odd++;
			sum_odd+=an;
		}
		
		if(num_even==x&&num_odd==x-1)
			break;
	}
	
	printf("%d %d",sum_even,sum_odd);
	return 0;
}
