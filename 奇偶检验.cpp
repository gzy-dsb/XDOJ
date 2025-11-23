#include<stdio.h> 

int main()
{
	char x;
	int n,t1=0,t2=0;
	scanf("%d ",&n);
	
	while(x!='!'){
		scanf("%c",&x);
		if(x>='a'&&x<='z'||x>='A'&&x<='Z'){
			if(x%n%2==1)
			t1+=1;
			else
			t2+=1;
		}	
	}
	printf("%d %d",t1,t2);
	
	return 0;
	
}
