#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list;
    int val;
    while (cin >> val && val != -1)
    {
        list.push_back(val);
    }

    set<int> uniqueValues(list.begin(), list.end());
    list.clear();
    for (int v : uniqueValues)
    {
        list.push_back(v);
    }

    for (int v : list)
    {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}