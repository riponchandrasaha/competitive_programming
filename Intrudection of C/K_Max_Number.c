#include <stdio.h>

// Recursive function to find maximum element
int find_max(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int max_of_rest = find_max(arr, n - 1);
    return (arr[n - 1] > max_of_rest) ? arr[n - 1] : max_of_rest;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val = find_max(arr, n);
    printf("%d\n", max_val);

    return 0;
}
