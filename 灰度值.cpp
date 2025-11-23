#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    // 灰度级为 0~15，共 16 级
    int count[16] = {0}; // 初始化所有灰度级计数为 0

    // 读取图像像素并统计
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int gray;
            scanf("%d", &gray);
            if (gray >= 0 && gray < 16) {
                count[gray]++;
            }
        }
    }

    // 输出结果，灰度级从 0 到 15
    for (int gray = 0; gray < 16; gray++) {
        if (count[gray] > 0) {
            printf("%d %d\n", gray, count[gray]);
        }
    }

    return 0;
}
