#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        if (sz == 0) return;
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        if (tail != NULL)
            return tail->val;
        return -1; // বা অন্য error handling
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; 
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
