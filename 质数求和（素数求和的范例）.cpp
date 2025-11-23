#include<stdio.h> 
#include<math.h>

int main(){
	int p;
	scanf("%d",&p);
	
	int i,j,cnt=1,sum=0;
	for(i=3;;i+=2){
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				break;
			}
		}
		if(j==int(sqrt(i))+1){
			cnt+=1;
		if(cnt>=p&&cnt<=p+10){
			sum+=i;
			}
		}
		
		if(cnt>p+10){
			break;
		}
	}
	
	printf("%d",sum);
}
