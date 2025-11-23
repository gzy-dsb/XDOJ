#include<stdio.h> 

int main()
{
	int w,n,p;
	int y=0;//0²»ÏÞ 1ÏÞ 
	scanf("%d %d %d",&w,&n,&p);
	int wei=p%10;
	printf("%d ",wei);
	
	if(w>=1&&w<=5){
		if(n<200){
			y=0; 
		}else if(n>=200&&n<400){
			switch(w){
			case 1:	
				if(wei==1||wei==6)
					y=1;
					break;
			case 2:	
				if(wei==2||wei==7)
					y=1;
					break; 
			case 3:	
				if(wei==3||wei==8)
					y=1;
					break; 
			case 4:	
				if(wei==4||wei==9)
					y=1;
					break; 
			case 5:	
				if(wei==5||wei==0)
					y=1;
					break; 						 
			}
		}else{
			if((wei+w)%2==0){
				y=1;
			}
		}
	}
	
	if(y==0){
		printf("no");
	}else{
		printf("yes");
	}
	
	return 0;
	
}
