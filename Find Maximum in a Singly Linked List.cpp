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
void insert_at_tail(Node *&head, Node *&tail, int val)
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

int find_max(Node *head)
{
    int max_val = head->val;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > max_val)
        {
            max_val = tmp->val;
        }
        tmp = tmp->next;
    }
    return max_val;
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
    int max_value = find_max(head);
    cout << max_value << endl;

    return 0;
}