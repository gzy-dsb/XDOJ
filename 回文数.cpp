#include<stdio.h> 

int main()
{
	int m;
	scanf("%d",&m);
	
	int i,j,k,cnt=0;
	for(i=1;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
				int hui=i*10001+j*1010+k*100;
				if(hui%m==0)
				cnt+=1;
			}
		}
	}
	printf("%d %d",m,cnt);
	return 0;
}
