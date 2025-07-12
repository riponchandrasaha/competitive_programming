#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int flag = 1;
        for (int j = 1; j < n; j++)
        {
            if (a[j] < a[j - 1])
            {
                flag = 0;
                break;
            }
        }
        for (int i = 0; i < 1; i++)
        {
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}