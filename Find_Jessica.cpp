#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string w;
    stringstream ss(s);
    int f = 0;
    while (ss >> w)
    {
        if (w == "Jessica")
        {
            f = 1;
            break;
        }
    }
    
       cout << (f ? "YES" : "NO") << endl;

    return 0;
}
