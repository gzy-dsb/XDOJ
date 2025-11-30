#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char a[50];
    fgets(a,sizeof(a),stdin);
    size_t len = strlen(a);
        if (len > 0 && a[len - 1] == '\n') {
            a[--len] = '\0';}

    int a0=0,a1=0,a2=0,a3=0,a4=0;        
    if(len>8){a0=1;}
    for(int i=0;i<len;i++){
        if(isupper(a[i])){
            a1=1;
        }else if(islower(a[i])){
            a2=1;
        }else if(isdigit(a[i])){
            a3=1;
        }else{
            a4=1;
        }
    }        
    printf("%d",a0+a1+a2+a3+a4);
    return 0;
}