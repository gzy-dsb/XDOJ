#include<stdio.h>

int judge(int x){
	int t=0;
	for(x=x;x>0;x/=10){
		if(x%10==7)
		t=1;
		break;
	}
	return t;
}

int main()
{
	int n,i,np;
	int t1=0,t2=0,t3=0;
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		if(i%7==0||judge(i)==1){
			n++;
			if(i%3==1){
				t1+=1;
				continue;
			}else if(i%3==2){
				t2+=1;
				continue;
			}else{
				t3+=1;
				continue;
			}
		}
	}
	printf("%d %d %d",t1,t2,t3);
	
	return 0;
}
