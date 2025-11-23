#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int start = A < B ? A : B;
    int end = A > B ? A : B;

    int count3 = 0, count4 = 0, count5 = 0;

    for (int i = start; i <= end; i++) {
        if (i % 3 == 0) count3++;
        if (i % 4 == 0) count4++;
        if (i % 5 == 0 && i % 2 != 0) count5++;
    }

    printf("%d %d %d\n", count3, count4, count5);

    int r1 = count3 % count4;
    int r2 = count3 % count5;
    int r3 = count4 % count3;
    int r4 = count4 % count5;
    int r5 = count5 % count3;
    int r6 = count5 % count4;

    int max_remainder = r1;
    if (r2 > max_remainder) max_remainder = r2;
    if (r3 > max_remainder) max_remainder = r3;
    if (r4 > max_remainder) max_remainder = r4;
    if (r5 > max_remainder) max_remainder = r5;
    if (r6 > max_remainder) max_remainder = r6;

    printf("%d\n", max_remainder);

    return 0;
}
