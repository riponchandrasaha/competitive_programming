#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    stack<int> tmp, copyst;

    while (!st.empty())
    {
        tmp.push(st.top());
        st.pop();
    }
    while (!tmp.empty())
    {
        copyst.push(tmp.top());
        tmp.pop();
    }
    while (!copyst.empty())
    {
        cout << copyst.top() << " ";
        copyst.pop();
    }
    cout << endl;

    return 0;
}