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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool is_palindrome(Node *head, Node *tail)
{
    while (head != NULL && tail != NULL && head != tail && head->prev != tail)
    {
        if (head->val == tail->val)
        {

            head = head->next;
            tail = tail->prev;
            return true;
        }
        else
        {
            return false;
        }

        /* else
        {
            head = head->next;
            tail = tail->prev;
        } */
    }
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
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
    print_list(head);
    if (is_palindrome(head, tail))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}