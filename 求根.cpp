#include<stdio.h> 
#include<math.h> 
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double deult=b*b-4*a*c;
	
	if(deult<0){
		printf("no");
	}else if(deult==0){
		printf("%.1f",-(b/(2*a)));
	}else{
		printf("%.1f %.1f",(-b+sqrt(deult))/(2*a),(-b-sqrt(deult))/(2*a));
	}
	
	return 0;
}
