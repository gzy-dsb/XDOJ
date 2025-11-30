#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[100];
    fgets(a,sizeof(a),stdin);
    int len=strlen(a);

    int judge=1;
    for(int i=0;i<=len/2-1;i++){
        if(a[i]!=a[len-1-i]){
            judge=0;
            break;
        }
    }
    if(judge==0){
        printf("No");
    }else{
        printf("yes");
    }

    return 0;
}