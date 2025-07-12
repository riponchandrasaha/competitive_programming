#include <stdio.h>
#include <stdlib.h>

// Compare function for sorting in descending order
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort in descending order
    qsort(a, n, sizeof(int), compare);

    long long sum = 0;
    int count = 0;
    
    // Add the top k positive numbers
    for (int i = 0; i < n && count < k; i++) {
        if (a[i] > 0) {
            sum += a[i];
            count++;
        }
    }

    printf("%lld\n", sum);

    return 0;
}
