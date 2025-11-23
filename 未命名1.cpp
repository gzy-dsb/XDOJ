#include <stdio.h>

// 计算真约数之和
int proper_divisors_sum(int x) {
    int total = 1;  // 1总是约数
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            total += i;
            if (i != x / i) {
                total += x / i;
            }
        }
    }
    return total;
}

// 计算真约数个数
int count_proper_divisors(int x) {
    int cnt = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            cnt++;
            if (i != x / i) {
                cnt++;
            }
        }
    }
    return cnt - 1;  // 减去自身
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // 遍历区间 [n, m]
    for (int i = n; i <= m; i++) {
        int s1 = proper_divisors_sum(i);
        // 检查是否构成亲和数对
        if (s1 > i && s1 <= m) {
            if (proper_divisors_sum(s1) == i) {
                int cnt_i = count_proper_divisors(i);
                int cnt_s1 = count_proper_divisors(s1);
                printf("%d %d,%d %d\n", i, cnt_i, s1, cnt_s1);
            }
        }
    }
    
    return 0;
}
