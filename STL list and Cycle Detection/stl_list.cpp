#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> b = {1, 5, 8, 3, 75};
    // int a[] = {10, 565, 56};
    // list<int> b2(a, a + 3);
    b.push_back(40);
    b.push_front(100);

    b.pop_back();
    b.pop_back();
    b.pop_front();
    for (int val : b)
    {
        cout << val << endl;
    }

    return 0;
}