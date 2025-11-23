#include <stdio.h>
#include <math.h>

int main() {
    double distance;
    int wait_time;
    
    // 读取输入
    scanf("%lf %d", &distance, &wait_time);
    
    // 计算里程费
    double cost = 0;
    
    if (distance <= 3) {
        cost = 10;
    } else if (distance <= 10) {
        cost = 10 + (distance - 3) * 2;
    } else {
        cost = 10 + (10 - 3) * 2 + (distance - 10) * 3;
    }
    
    // 计算等待费
    cost += (wait_time / 5) * 2;
    
    // 四舍五入输出
    printf("%.0f\n", round(cost));
    
    return 0;
}
