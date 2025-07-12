#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[1000], B[1000], C[1000];

        // Input A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];  // Copy A to B
        }

        // Sort B
        qsort(B, N, sizeof(int), cmp);

        // Create C
        for (int i = 0; i < N; i++) {
            int diff = A[i] - B[i];
            C[i] = diff < 0 ? -diff : diff;
        }

        // Print C
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
