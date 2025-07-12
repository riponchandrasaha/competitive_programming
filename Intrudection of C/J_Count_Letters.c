#include <stdio.h>

int main() {
    register static int i = 10;
    i =11;
    printf("%d\n",i)
    return 0;
}
