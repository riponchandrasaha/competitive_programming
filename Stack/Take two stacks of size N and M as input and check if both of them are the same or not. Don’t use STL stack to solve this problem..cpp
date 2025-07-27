#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class Stack
{
private:
    Node *topNode;
    int sz;

public:
    Stack()
    {
        topNode = NULL;
        sz = 0;
    }

    void push(int val)
    {
        Node *newnode = new Node(val);
        newnode->next = topNode;
        topNode = newnode;
        sz++;
    }
    void pop()
    {
        if (topNode == NULL)
            return;
        Node *deleteNode = topNode;
        topNode = topNode->next;
        delete deleteNode;
        sz--;
    }
    int top()
    {
        if (topNode == NULL)
            return -1;
        return topNode->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return topNode == NULL;
    }
    bool isEqual(Stack &other)
    {
        if (this->size() != other.size())
            return false;
        Node *a = this->topNode;
        Node *b = other.topNode;
        while (a != NULL && b != NULL)
        {
            if (a->val != b->val)
                return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};
int main()
{
    Stack st1, st2;
    int n,m,x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st1.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        st2.push(x);
    }
    if(st1.isEqual(st2))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }





    return 0;
}