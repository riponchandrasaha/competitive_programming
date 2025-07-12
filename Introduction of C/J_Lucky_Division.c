#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is lucky (contains only 4 and 7)
bool is_lucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
            return false;
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    bool found = false;

    // Check all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (is_lucky(i) && n % i == 0) {
            found = true;
            break;
        }
    }

    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
