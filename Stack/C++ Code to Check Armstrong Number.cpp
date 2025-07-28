#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    int original = num;
    int n = to_string(num).size(); // number of digits
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    if (sum == original)
        cout << "Armstrong number\n";
    else
        cout << "Not an Armstrong number\n";

    return 0;
}
