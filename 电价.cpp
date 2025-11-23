#include<stdio.h> 

int main()
{
	char level;
	double a=110,b=210,c=400;
	double N=0,t=0;
	double P=0;
	scanf("%lf",&P);//注意输入数据类型 
	
	if(P<=110){
		level='A';
		N=P*0.5;
	}else if(P>110&&P<=210){
		level='B';
		t=P-a; 
		N=a*0.5+(P-a)*0.55;
	}else if(P>210&&P<=400){
		level='C';
		t=P-b;
		N=a*0.5+(b-a)*0.55+(P-b)*0.7;
	}else{
		level='D';
		t=P-c;
		N=a*0.5+(b-a)*0.55+(c-b)*0.7+(P-c)*1.0;
	}
	printf("%.2f %c %.2f",N,level,t);
	
	return 0;
}
