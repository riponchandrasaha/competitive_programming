#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    bool jadu = true;

    if (r != c) {
        jadu = false;
    } else {
        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++) {
                if ((i==j || i+j==r-1) && a[i][j]!=1) {
                    jadu = false;
                } else if (!(i==j || i+j==r-1) && a[i][j] !=0) {
                    jadu = false;
                }
            }
        }
    }

    if (jadu) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
