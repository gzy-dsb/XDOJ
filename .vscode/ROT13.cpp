#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char a[61];
    fgets(a,sizeof(a),stdin);
    size_t len=strlen(a);
    if(len>0&&a[len-1]=='\n'){
        a[--len]='\0';
    }

    for(int i=0;i<len;i++){
        if(isupper(a[i])){
            a[i]=(a[i]-'A'+13)%26+'A';
        }else if(islower(a[i])){
            a[i]=(a[i]-'a'+13)%26+'a';
        }
    }

    printf("%s",a);
    return 0;
}