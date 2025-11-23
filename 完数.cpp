#include<stdio.h> 

int main()
{
	int a,b,n=1,sum=0;
	scanf("%d %d",&a,&b);
	
	for(int i=a;i<=b;i++){
		for(n=1;n<i;n++){
			if(i%n==0)
				sum+=n;
				//若下面的输出语句放在此处则当n=4，5时还会额外输出2次 
			}
		}
		if(sum==i){
				printf("%d\n",i);
		sum=0;
	}
	return 0;
}
