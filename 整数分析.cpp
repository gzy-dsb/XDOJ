#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("1 0 0\n");
        return 0;
    }

    int count = 0;
    int maxDigit = 0;
    int minDigit = 9;

    while (n > 0) {
        int digit = n % 10;
        count++;
        if (digit > maxDigit) maxDigit = digit;
        if (digit < minDigit) minDigit = digit;
        n /= 10;
    }

    printf("%d %d %d\n", count, maxDigit, minDigit);
    return 0;
}
