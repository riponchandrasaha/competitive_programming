#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if (n % 2 != 0) {
            cout << -1 << endl;
        } else {
            cout << abs(even - odd) / 2 << endl;
        }
    }
    return 0;
}