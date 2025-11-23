#include<stdio.h>

int main()
{
	char x;
	int cnt;
	
	for(int i=1;i<=5;i++){
		scanf("%c",&x);
		if(i!=5)
		scanf(" ");
		if(x=='a'||x=='A')
		cnt+=1;
	}
	printf("%d",cnt);
	
	return 0;
}
