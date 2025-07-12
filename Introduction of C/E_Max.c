#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int max = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int val;
        scanf("%d",&val);
        if(val > max)
        {
            max = val;
        }
    }
    printf("%d",max);

    return 0;
}
