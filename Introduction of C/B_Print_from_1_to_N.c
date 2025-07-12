#include <stdio.h>
void printnumbers(int current, int n)
{if(current > n)
    return;
    printf("%d\n",current);
    printnumbers(current+1,n);

}
int main() {
    int n;
    scanf("%d", &n);
    printnumbers(1,n);
    
    return 0;
}
