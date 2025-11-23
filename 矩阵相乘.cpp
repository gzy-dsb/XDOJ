#include <stdio.h>

int main() {
    int A[2][3], B[3][2], C[2][2] = {0};
    int i, j, k;
    
    // 读取矩阵A (2×3)
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // 读取矩阵B (3×2)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // 矩阵乘法计算
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // 输出结果
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", C[i][j]);
            if (j < 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
