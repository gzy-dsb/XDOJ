#include<stdio.h> 

int main()
{
	int n;
	int a,pa,b,pb,c,pc;
	scanf("%d",&n);
	scanf("%d %d %d %d %d %d",&a,&pa,&b,&pb,&c,&pc);
	
	int i,j,k,judge=0;
	for(i=0;i<n/a+1;i++){
		for(j=0;j<n/b+1;j++){
			for(k=0;k<n/c+1;k++){
				if(a*i+b*j+c*k==n&&pa*i+pb*j+pc*k==n){
					printf("%d %d %d\n",a*i,b*j,c*k);
					judge=1;
				}
			}
		}
	}
	if(judge==0){
		printf("no solution");
	}
	return 0;
}
