#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N];

    for (int i=0; i<N; i++) {
        scanf("%d ", &a[i]);
    }

 
        for (int i=N-1; i>=0; i--) {
            if (i%2 == 1)
            {
            printf("%d ", a[i]);
            }
        }
    

    return 0;
}
