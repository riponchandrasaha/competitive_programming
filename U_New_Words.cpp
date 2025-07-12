#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int freq[26] = {0};
    for (char c : s)
    {
        if (c >= 'A' && c <= 'z')
        {
            freq[c - 'A']++;
        }
    }

    int countE = freq['E' - 'A'];
    int countG = freq['G' - 'A'];
    int countY = freq['Y' - 'A'];
    int countP = freq['P' - 'A'];
    int countT = freq['T' - 'A'];

    int result = min({countE, countG, countY, countP, countT});

    cout << result << endl;
    return 0;
}