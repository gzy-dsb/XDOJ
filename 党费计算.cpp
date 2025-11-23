#include <stdio.h>

int main() {
    double salary, fee;
    
    // 输入税后工资
    scanf("%lf", &salary);
    
    // 根据工资区间计算党费
    if (salary <= 3000) {
        fee = salary * 0.005;  // 0.5%
    } else if (salary <= 5000) {
        fee = salary * 0.01;   // 1%
    } else if (salary <= 10000) {
        fee = salary * 0.015;  // 1.5%
    } else {
        fee = salary * 0.02;   // 2%
    }
    
    // 输出结果，保留1位小数
    printf("%.1f\n", fee);
    
    return 0;
}
