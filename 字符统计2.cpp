#include<stdio.h>
#include<string.h>

int main(void)
{
    char c;
    int n;
    scanf("%c %d ",&c,&n);

    char a[100];
    fgets(a,sizeof(a),stdin);
    int len=strlen(a);
    if (len > 0 && a[len - 1] == '\n') {
            a[--len] = '\0';}//防止敲回车给录进去导致字符数偏多

    int cnt=0;
    if(n==1){
        for(int i=0;i<len;i++){
            if(a[i]==c){
                cnt+=1;
            }
        }
    }

    if(n==0){
        for(int i=0;i<len;i++){
            if(a[i]==c||a[i]==c+32||a[i]==c-32){
                cnt+=1;
            }
        }
    }

    printf("%d",cnt);
    return 0;
}