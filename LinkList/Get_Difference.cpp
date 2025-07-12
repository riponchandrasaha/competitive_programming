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
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
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

    int max= head->val;
    int min = head->val;

    Node* tmp = head;

    while (tmp !=NULL)
    {
    if(tmp->val > max)
    {
        max= tmp->val;
    }
    if(tmp->val < min)
    {
        min = tmp->val;
    }
    tmp = tmp->next;
    }
     
    cout <<  max- min << endl;
    
    return 0;
}