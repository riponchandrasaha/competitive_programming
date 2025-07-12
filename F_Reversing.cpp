#include <iostream>
#include <algorithm> // for reverse()
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse using built-in function
    reverse(arr, arr + n);

    // Output
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
