#include<stdio.h>

int main()
{
    int x,n;
    scanf("%d",&x);

    while(x!=1){
        if(x%2==0){
            x/=2;
        }else{
            x=3*x+1;
        }  
    n+=1;
    }
    printf("%d",n); 
    return 0;
}
