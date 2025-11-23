#include<stdio.h> 

int main()
{
	int M,a=7,b=11,fm=18;
	scanf("%d",&M);
	
	if(M==0){
		printf("0 7");
	}else if(M==1){
		printf("1 11");
	}else{
		for(int i=2;i<M;i++){
			a=b;
			b=fm;
			fm=a+b;
		}
		printf("%d %d",M,fm) ;
	}
	return 0;
}
