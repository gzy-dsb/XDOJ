#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maxLen = 1;  // 至少有一个数字
    int currentLen = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLen++;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            currentLen = 1;
        }
    }
    
    printf("%d\n", maxLen);
    
    return 0;
}
