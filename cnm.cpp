#include <stdio.h>
#include <string.h>

int main() {
    char num[20];  // 2^32最多10位数字，分配20足够
    scanf("%s", num);
    
    int len = strlen(num);
    int max_digit = num[0] - '0';
    int min_digit = num[0] - '0';
    
    for (int i = 1; i < len; i++) {
        int digit = num[i] - '0';
        if (digit > max_digit) {
            max_digit = digit;
        }
        if (digit < min_digit) {
            min_digit = digit;
        }
    }
    
    printf("%d %d\n", max_digit, min_digit);
    return 0;
}
