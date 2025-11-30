#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char a[13];
    gets(a);
    int ret=0,n=0;
    for(int i=0;i<9;i++){
        if(isdigit(a[n])==0){
            n++;
        }
        ret+=(a[n]-'0')*(i+1);
        n++;
    }
    ret=ret%11;

    if((ret=10&&'X'==a[12])||(ret+'0'==a[12])){
        printf("Right");
    }else{
        a[12]=ret+'0';
        printf("%s",a);
    }

    return 0;
}
