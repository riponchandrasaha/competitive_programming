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
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
}

int find_index(Node *head, int x)
{
    int idx = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return idx;
        }
        idx++;
        tmp = tmp->next;
    }
    return -1;
}
int main()
{
    int T;
    cin >> T;
    for (int test = 0; test < T; test++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }

        int x;
        cin >> x;

        cout << find_index(head, x) << endl;
    }

    return 0;
}