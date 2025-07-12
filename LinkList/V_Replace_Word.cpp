#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < s.length();)
    {

        if (s.substr(i, 5) == "EGYPT")
        {
            result += ' ';
            i += 5;
        }
        else
        {
            result += s[i];
            i++;
        }
    }

    cout << result << endl;
    return 0;
    return 0;
}