#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int levels = n + 2;  // Number of levels in top pyramid

    // Top part: pyramid with center alignment
    for (int i = 1; i <= levels; i++) {
        int stars = 2 * i - 1;
        int spaces = levels - i;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Bottom part: trunk (always 5 lines, center aligned)
    int trunk_width = n;
    int trunk_spaces = levels - (n / 2) - 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < trunk_spaces; j++) {
            printf(" ");
        }

        for (int j = 0; j < trunk_width; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
