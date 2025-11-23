#include<stdio.h>

int main()
{
	int year,mon,day,hour,min,sec;
	int max;
	scanf("%d %d %d %d %d %d",&year,&mon,&day,&hour,&min,&sec);
	if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
			max=31;
	else if(mon==2){
			if((year%4==0&&year%100!=0)||year%400==0){
				max=29;
			}else{
				max=28;
			}
		}
	else{
			max=30;	
	}
	
	sec++;
	if(sec==60){
		min++;
		sec=0;
	}
	if(min==60){
		hour++;
		min=0;
	}
	if(hour==24){
		day++;
		hour=0;
	}
	if(day==max+1){
		mon++;
		day=1;
	}	
	if(mon==13){
		year++;
		mon=1;
	}
	
	printf("%d \n%d \n%d \n%d \n%d \n%d \n",year,mon,day,hour,min,sec);
	return 0;
}
