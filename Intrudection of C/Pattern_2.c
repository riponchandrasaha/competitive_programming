#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    for (int i=1;i<=n;i++) {
        int space=n-i;

        
        for (int j=1;j<=space;j++) {
            printf(" ");
        }

        for (int j=i;j>=1;j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
