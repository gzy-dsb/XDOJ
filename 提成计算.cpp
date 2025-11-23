#include <stdio.h>

int main() {
    int level, performance;
    scanf("%d %d", &level, &performance);
    
    // 定义底薪业绩和提成比例
    int base_salary;
    float ratio;
    
    switch(level) {
        case 1:
            base_salary = 50000;
            ratio = 3.0;
            break;
        case 2:
            base_salary = 35000;
            ratio = 2.0;
            break;
        case 3:
            base_salary = 20000;
            ratio = 2.0;
            break;
        case 4:
            base_salary = 5000;
            ratio = 2.5;
            break;
        default:
            return 1; // 无效等级
    }
    
    // 计算提成
    float commission;
    if (performance < base_salary) {
        commission = 0.0;
    } else {
        commission = (performance - base_salary) * ratio / 100;
    }
    
    // 输出结果，保留1位小数
    printf("%d %.1f %.1f\n", level, (float)base_salary, commission);
    
    return 0;
}
