#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[100000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int front = 0,back = n-1;
    while (front <=back)
    {
        printf("%d ",a[front]);
        front++;
        if(front <= back)
        {
            printf("%d ",a[back]);
            back--;
        }
    }
    printf("\n");
    

    return 0;
}
