#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> b = {1, 5, 8, 3, 485, 75};
    /* list<int> b2 = {1, 5, 8, 3, 75}; */
    // int a[] = {10, 565, 56};
    // list<int> b2(a, a + 3);
    /*  b.push_back(40);
     b.push_front(100);

     b.pop_back();
     b.pop_back();
     b.pop_front(); */

    /* b.insert(next(b.begin(),2),b2.begin(),b2.end()); */
    /* b.erase(next(b.begin(), 3)); */
    // b.erase(next(b.begin(), 2),next(b.begin(), 4));
    /* replace(b.begin(), end(),20,15)
    for (int val : b)
    {
        cout << val << endl;
    }
 */
    auto it = find(b.begin(), b.end(), 20);
    if (it == b.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    return 0;
}