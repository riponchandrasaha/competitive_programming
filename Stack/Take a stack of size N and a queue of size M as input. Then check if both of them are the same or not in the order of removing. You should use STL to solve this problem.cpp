#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N;
    stack<int> st;
    vector<int> tempstack(N);
    for (int i = 0; i < N; i++)
        cin >> tempstack[i];
    for (int i = 0; i < N; i++)
        st.push(tempstack[i]);
    cin >> M;
    queue<int> q;
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (N != M)
    {
        cout << "NO\n";
        return 0;
    }

    bool same = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }
    cout << (same ? "YES" : "NO") << endl;

    return 0;
}