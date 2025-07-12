#include <stdio.h>
void printreverse(int n)
{
    if (n==1)
    {
        printf("1");
        return;
    }
    printf("%d ", n);
    printreverse(n -1);

}
int main() {
    int n;
    scanf("%d", &n);
    printreverse(n);
    return 0;
}
