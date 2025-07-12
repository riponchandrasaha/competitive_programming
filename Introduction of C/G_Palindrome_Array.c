#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], i, j;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    j = n - 1;

    for(i = 0; i < j; i++, j--) {
        if(arr[i] != arr[j]) {
            printf("NO\n");  
            return 0;
        }
    }

    printf("YES\n");  
    return 0;
}
