#include <stdio.h>

int main() {
    double t, costA, costB;
    
    // 输入通话时间
    scanf("%lf", &t);
    
    // 计算套餐A费用：0.6元/分钟
    costA = t * 0.6;
    
    // 计算套餐B费用：50元月租 + 0.4元/分钟
    costB = 50 + t * 0.4;
    
    // 输出两种套餐费用，保留两位小数
    printf("%.2f\n", costA);
    printf("%.2f\n", costB);
    
    // 判断哪种套餐更合适
    if (costB > costA) {
        printf("A\n");
    } else {
        printf("B\n");  // 题目要求花费一样时也选B
    }
    
    return 0;
}
