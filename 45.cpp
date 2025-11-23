#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int temperatures[30]; // ×î¶à 30 Ìì
    for (int i = 0; i < n; i++) {
        scanf("%d", &temperatures[i]);
    }
    
    int maxChange = 0;
    for (int i = 1; i < n; i++) {
        int change = abs(temperatures[i] - temperatures[i - 1]);
        if (change > maxChange) {
            maxChange = change;
        }
    }
    
    printf("%d\n", maxChange);
    
    return 0;
}
