#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int min_cost = 0x7fffffff; // 初始化为一个很大的数

    for (int i = 0; i < 3; i++) {
        int num, price;
        scanf("%d %d", &num, &price);
        
        int packs = (n + num - 1) / num; // 向上取整
        int cost = packs * price;
        if (cost < min_cost) {
            min_cost = cost;
        }
    }

    printf("%d\n", min_cost);
    return 0;
}
