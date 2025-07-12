#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int primary_sum = 0, secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        primary_sum += a[i][i];               // Primary diagonal: i == j
        secondary_sum += a[i][n - 1 - i];     // Secondary diagonal: i + j == n - 1
    }

    int diff = abs(primary_sum - secondary_sum);
    printf("%d\n", diff);

    return 0;
}
