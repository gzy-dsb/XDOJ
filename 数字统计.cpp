#include<stdio.h> 

int main()
{
	int a,b,y1,y2;
	scanf("%d %d",&a,&b);
	y1=a*a-2*a-3;
	y2=-b*b+5*b+2;
	
	int max=(y1>y2)?y1:y2; 
	int min=(y1<y2)?y1:y2;
	
	int cnt1=0,cnt2=0;
	for(int i=min;i<=max;i++){
		if(i%3==0)
		cnt1+=1;
		if(i%5<3)
		cnt2+=1;
	}
	
	printf("%d %d",cnt1,cnt2);
	return 0;
}
