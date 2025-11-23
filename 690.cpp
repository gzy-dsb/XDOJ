#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int start = n;
    int end = n * n;

    int odd_count = 0, even_count = 0, special_count = 0;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 1) {
            odd_count++;
        } else {
            even_count++;
        }

        if (i % 4 == 0 && i % 3 != 0) {
            special_count++;
        }
    }

    // 输出第一行
    printf("%d %d %d\n", odd_count, even_count, special_count);

    // 计算两两之和的最大值
    int max_sum = odd_count + even_count;
    if (odd_count + special_count > max_sum) {
        max_sum = odd_count + special_count;
    }
    if (even_count + special_count > max_sum) {
        max_sum = even_count + special_count;
    }

    // 输出第二行
    printf("%d\n", max_sum);

    return 0;
}
