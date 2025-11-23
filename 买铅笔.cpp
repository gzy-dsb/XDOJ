#include<stdio.h> 

int main(){
	int x,a,fa,b,fb,c,fc;
	scanf("%d %d %d %d %d %d %d",&x,&a,&fa,&b,&fb,&c,&fc);
	
	int i,j,k,t=0,min=((x/a+1)*fa>(x/b+1)*fb)?(x/a+1)*fa:(x/b+1)*fb;
	min=((x/c+1)*fc>min)?(x/c+1)*fc:min;
	for(i=0;a*i<x;i++){
		for(j=0;a*i+b*j<x;j++){
			for(k=0;i*a+j*b+k*c<x;k++){
				}
				t=i*fa+j*fb+k*fc;
				min=(t<min)?t:min;
		}
	}
	for(i=0;a*i<x;i++){
		for(j=0;a*i+c*j<x;j++){
			for(k=0;i*a+c*j+b*k<x;k++){
				}
				t=i*fa+j*fc+k*fb;
				min=(t<min)?t:min;
		}
	}
	for(i=0;b*i<=x;i++){
		for(j=0;c*j<=x;j++){
			for(k=0;b*i+c*j+a*k<x;k++){
				}
				t=i*fb+j*fc+k*fa;
				min=(t<min)?t:min;
		}
	}
	
	printf("%d",min);
}
