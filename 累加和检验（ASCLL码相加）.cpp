#include <stdio.h>

int main() {
    char str[101];
    fgets(str, 101, stdin);  // 读取最多 100 个字符
    
    int sum = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        sum += (unsigned char)str[i];  // 按字节无符号累加
    }
    
    printf("%d\n", sum % 256);
    return 0;
}
