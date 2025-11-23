#include <stdio.h>

int main()
{
	double PI=3.1415926;
	int dt,dj;//ºÁÃ× 
	double mt=7.86,mj=19.3;
	
	scanf("%d %d",&dt,&dj);
	
	printf("%.3f %.3f",PI*dt*dt*dt/6000*mt,PI*dj*dj*dj/6000*mj);
	 
	return 0;
}
