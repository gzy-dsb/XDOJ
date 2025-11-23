#include <stdio.h>

int main() {
    int profit;
    int bonus = 0;
    
    scanf("%d", &profit);
    
    // 分段计算奖金
    if (profit > 1000000) {
        bonus += (profit - 1000000) * 0.01;
        profit = 1000000;
    }
    if (profit > 600000) {
        bonus += (profit - 600000) * 0.015;
        profit = 600000;
    }
    if (profit > 400000) {
        bonus += (profit - 400000) * 0.03;
        profit = 400000;
    }
    if (profit > 200000) {
        bonus += (profit - 200000) * 0.05;
        profit = 200000;
    }
    if (profit > 100000) {
        bonus += (profit - 100000) * 0.075;
        profit = 100000;
    }
    
    // 最后100000元的部分
    bonus += profit * 0.1;
    
    printf("%d", bonus);
    
    return 0;
}
