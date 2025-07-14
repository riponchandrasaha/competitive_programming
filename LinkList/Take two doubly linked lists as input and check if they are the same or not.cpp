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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    newnode = tail;
}
bool same(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return (tmp1 == NULL && tmp2 == NULL);
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }

    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }
    if (same(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}