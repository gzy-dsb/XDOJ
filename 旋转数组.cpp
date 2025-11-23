#include <stdio.h>

int main() {
    double q1, q2, q3, q4;
    scanf("%lf, %lf, %lf, %lf", &q1, &q2, &q3, &q4);

    // 计算旋转矩阵 R 的每个元素
    double R[3][3];
    R[0][0] = q1*q1 + q2*q2 - q3*q3 - q4*q4;
    R[0][1] = 2 * (q2*q3 - q1*q4);
    R[0][2] = 2 * (q2*q4 + q1*q3);
    
    R[1][0] = 2 * (q2*q3 + q1*q4);
    R[1][1] = q1*q1 - q2*q2 + q3*q3 - q4*q4;
    R[1][2] = 2 * (q2*q4 - q1*q2);  // 注意：题目中第三项疑似有误，已按常见公式修正
    
    R[2][0] = 2 * (q2*q4 - q1*q3);
    R[2][1] = 2 * (q3*q4 + q1*q2);  // 注意：题目中第三项疑似有误，已按常见公式修正
    R[2][2] = q1*q1 - q2*q2 - q3*q3 + q4*q4;

    // 输出矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.6f", R[i][j]);
            if (j < 2) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
