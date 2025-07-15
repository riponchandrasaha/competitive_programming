#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers or numbers ending with 0 (but not 0 itself) are not palindrome
        if (x < 0 || (x != 0 && x % 10 == 0)) return false;

        int y = 0;
        while (x > y) {
            y = y * 10 + x % 10;
            x = x / 10;
        }

        /* // For even digits: x == y, for odd digits: x == y/10 (middle digit ignored) */
        return (x == y || x == y / 10);
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
