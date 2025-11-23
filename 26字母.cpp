#include<stdio.h> 

int main()
{
	char i;
	for(i='a';i<='z';i++){
		printf("%c ",i);
	}
	
	printf("\n");
	
	for(i='z';i>='a';i--){
		printf("%c ",i);
	}
	return 0;
}
