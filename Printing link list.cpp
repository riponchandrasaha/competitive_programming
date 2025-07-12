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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(25);
    Node *c = new Node(68);

    head->next = a;
    a->next = b;
    b->next = c;

    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}