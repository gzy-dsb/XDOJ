#include<stdio.h> 
#include<ctype.h>


int main(){	
	int t1=0,t2=0,t3=0;
	char x;
	while(x!='!'){
		scanf("%c",&x);
		if(isupper(x)){
			t1+=1;
		}else if(islower(x)){
			t2+=1;
		}else if(isdigit(x)){
			t3+=1;
		}
	}
	printf("%d %d %d",t1,t2,t3);
	return 0;
}


