#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *a = new int[n];

    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    reverse(a,a+n);
    return a;
}
int main()
{

    int n;
    cin >> n;
    int* is_sorted = sort_it(n);
    for(int i=0;i<n;i++)
    {
        cout << is_sorted[i] << " ";
    }
    cout << endl;
    delete[] is_sorted;
    return 0;
}