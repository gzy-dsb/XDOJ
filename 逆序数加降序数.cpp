#include<stdio.h> 

int main()
{
	int x,i=0,n=0;
	scanf("%d",&x);
	int a[7],b[7];
	
	for(x=x;x>0;x/=10){
		a[i]=x%10;
		b[i]=x%10;
		i++;
		n++;
	}
	
	int j,t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[i]<b[j]){
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	
	int k,sum1=0,sum2=0;
	for(k=0;k<n;k++){
	sum1=a[k]+sum1*10;
	sum2=b[k]+sum2*10;
	}
	
	printf("%d",sum1+sum2);
	return 0;
}
