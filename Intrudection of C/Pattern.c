#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

  
    for(int i = 0; i < n; i++) {
        int spaces = n - i - 1;
        int chars = i * 2 + 1;
        char ch = (i % 2 == 0) ? '#' : '-';

        
        for(int s = 0; s < spaces; s++) {
            printf(" ");
        }
        
        for(int j = 0; j < chars; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    
    for(int i = n - 2; i >= 0; i--) {
        int spaces = n - i - 1;
        int chars = i * 2 + 1;
        char ch = (i % 2 == 0) ? '#' : '-';

        
        for(int s = 0; s < spaces; s++) {
            printf(" ");
        }
        
        for(int j = 0; j < chars; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
