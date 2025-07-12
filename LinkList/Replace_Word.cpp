#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++)
    {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);
        string result;
        for (int i = 0; i < s.length();)
        {
            if (s.substr(i, x.length()) == x)
            {
                result += "#";
                i += x.length();
            }
            else
            {
                result += s[i];
                i++;
            }
        }
        cout << result << endl;
    }
    return 0;
}