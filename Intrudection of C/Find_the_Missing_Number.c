#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i=0;i<t;i++) {
        long long m;
        int a,b,c;
        scanf("%lld %d %d %d",&m,&a,&b,&c);

        long long mul=(long long)a*b*c;

        if (mul==0) {
            if (m==0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else {
            if (m%mul==0) {
                long long missingnumber= (long long)m/mul;
                printf("%lld\n",missingnumber);
            } else {
                printf("-1\n");
            }
        }
    }

    return 0;
}
