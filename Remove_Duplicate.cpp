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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void remove_duplicate_Nodes(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *p = tmp;
        Node *d = tmp->next;
        while (d != NULL)
        {

            if (d->val == tmp->val)
            {
                p->next = d->next;
                delete d;
                d=  p->next;
            }
            else{
                p = d;
                d= d->next;
            }
            
        }
        tmp = tmp->next;
        
    }
}
    

void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }

    remove_duplicate_Nodes(head);
    print_list(head);
    return 0;
}