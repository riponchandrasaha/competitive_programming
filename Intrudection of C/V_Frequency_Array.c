#include <stdio.h>

int main() {
    int N,M;
    scanf("%d %d", &N,&M);  
    int fre[M];
    for(int i=1; i<=M; i++)
    {
        fre[i] = 0;
    }
    int x;
    for (int i=0;i<N;i++)
    {
        scanf("%d", &x);
        fre[x]++;
    }
    for(int i=1;i<=M;i++)
    {
        printf("%d\n",fre[i]);
    }
    return 0;
}
