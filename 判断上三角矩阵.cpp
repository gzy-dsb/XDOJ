#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // 读取矩阵个数

    while (T--) {
        int n;
        scanf("%d", &n); // 矩阵大小
        int matrix[n][n];

        // 读入矩阵
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // 判断是否为上三角矩阵
        int isUpper = 1; // 假设是上三角
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) { // 只检查下三角部分（i > j）
                if (matrix[i][j] != 0) {
                    isUpper = 0;
                    break;
                }
            }
            if (!isUpper) break;
        }

        // 输出结果
        if (isUpper) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
