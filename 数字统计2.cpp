#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int m,k;
	scanf("%d %d",&m,&k);
	
	int i,an;
	int m0=0,m1=0;
	for(i=1;i<k+1;i++){
		if(i==1){
			an=2;
		}else if(i==2){
			an=3;
		}else{
			an=(i-1)*(i-1)+3*(i-2)+1;
		}
		
		if(an%m==0){
			m0+=1;
		}else if(an%m==1){
			m1+=1;
		}
	}
	
	printf("%d %d %d",m0,m1,k-m0-m1);
	return 0; 
}
