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

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    if (tmp->next != NULL)
        tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

int main()
{
    Node *head = new Node(51);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    insert_at_any_pos(head, 2, 100); // Insert 100 between 51 and 20
    print_forward(head);

    return 0;
}
