#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> b = {1, 5, 8, 3, 75};
    int a[] = {10, 565, 56};
    list<int> b2(a, a + 3);
    for (int val :b2)
    {
        cout << val << endl;
    }

    return 0;
}