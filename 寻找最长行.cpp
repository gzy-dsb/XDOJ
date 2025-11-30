#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    char maxline[100] = "";
    size_t maxlen = 0;

    while (fgets(a, sizeof(a), stdin)) {  //fgets(字符串变量的名称，最大字符数！！！，文件流指针（通常是stdin）)
        size_t len = strlen(a);
        if (len > 0 && a[len - 1] == '\n') {
            a[--len] = '\0';//防止敲回车给录进去导致字符数偏多
        }
        if (strcmp(a, "***end***") == 0) {
            break;//strcmp逐个比较，strncmp前n个逐个比较,结果<0表示str1<str2,=0,>0同理
        }
        if (len > maxlen) {
            maxlen = len;
            strcpy(maxline, a);//将后一个字符串复制给前一个
        }
    }

    printf("%zu\n", maxlen);
    if (maxlen > 0) {
        printf("%s\n", maxline);
    }

    return 0;
}
