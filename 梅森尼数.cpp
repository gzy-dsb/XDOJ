#include<stdio.h> 
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int m=pow(2,n)-1;
	printf("%d ",m);
	int judge=1;
	if(m==1){
		printf("0");
	}else{
		int i; 
	for(i=2;i<m;i++){
		if(m%i==0){
			judge=0;
			break;
		}
	}
	printf("%d",judge);
	}
	
	return 0;
}
