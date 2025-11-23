#include<stdio.h> 
#include<stdlib.h> 

int main(){
	int n,i;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
	}
	
	int j,t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	int cnt=1;
	for(i=1;i<n;i++){
		if(a[i]==a[i-1]){
			cnt+=1;
		}else{
			printf("%d:%d\n",a[i-1],cnt);
			cnt=1;
		}
	}
	printf("%d:%d\n",a[n-1],cnt);
	
	return 0;
}
