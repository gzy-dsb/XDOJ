#include<stdio.h>
#include<string.h>

int main()
{
    char m[5],s[51];
    fgets(m,sizeof(m),stdin);
    fgets(s,sizeof(s),stdin);
    size_t lenm=strlen(m),lens=strlen(s);

    m[strcspn(m,"\n")] ='\0';
    s[strcspn(s,"\n")] ='\0';

    int cnt=0;
    char *pos=s;
    
    while((pos=strstr(pos,m))!=NULL){
    	cnt++;
    	pos++;
	} 

    printf("%d",cnt);
    return 0;
}

