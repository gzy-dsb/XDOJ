#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
void judge(int x){
	if(x==0||x==1){
		printf("%d\n",x);
}else{
	int t=x*x;
	int i,cnt=-1;
	int found=0; 
	for(i=t;i>0;i/=10){
		cnt++;
	}
	
	for(i=cnt;i>-1;i--){
		t=t%int(pow(10,double(i)));
		if(t==x){
			printf("%d\n",x);
			found=1;
			break;
		}
	}
	if(found==0){
		printf("No\n");
	}
 }
}
int main()
{
	int x;
	scanf("%d",&x);
	int *a=(int*)malloc(x*sizeof(int));
	
	int i;
	for(i=0;i<x;i++){
		scanf("%d",&a[i]) ;
	}
	
	for(i=0;i<x;i++){
		judge(a[i]);
	}
	return 0;
}
