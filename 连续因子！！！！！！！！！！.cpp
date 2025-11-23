#include <stdio.h>
#include <math.h>

int main() {
    long long N;
    scanf("%lld", &N);
    
    int maxLen = 0;
    int start = 0;
    
    // 枚举可能的连续因子长度，从大到小
    for (int len = 12; len >= 1; len--) {
        // 枚举起点
        for (int first = 2; first <= sqrt(N) + 1; first++) {
            long long product = 1;
            // 计算连续len个数的乘积
            for (int i = 0; i < len; i++) {
                product *= (first + i);
                // 如果乘积已经超过N，提前退出
                if (product > N) {
                    product = 0;
                    break;
                }
            }
            // 检查是否能整除N
            if (product > 0 && N % product == 0) {
                maxLen = len;
                start = first;
                goto OUTPUT; // 找到就跳出
            }
        }
    }
    
    // 如果没找到长度>=2的连续因子，则N是质数或只有一个因子
    if (maxLen == 0) {
        maxLen = 1;
        start = N; // 对于质数，因子就是它本身
        // 找到N的最小真因子
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                start = i;
                break;
            }
        }
    }
    
OUTPUT:
    printf("%d\n", maxLen);
    
    // 输出连续因子序列
    for (int i = 0; i < maxLen; i++) {
        printf("%d", start + i);
        if (i < maxLen - 1) {
            printf("*");
        }
    }
    printf("\n");
    
    return 0;
}
