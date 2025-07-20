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
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
bool palindrome(Node *head, Node *tail)
{

    while (head != NULL && tail != NULL && head != tail && tail->next != head)
    {
        if (head->val != tail->val)
        {
            return false;
        }
        else
        {
            head = head->next;
            tail = tail->prev;
        }
        
    }
    return true;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    if(palindrome(head,tail))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}