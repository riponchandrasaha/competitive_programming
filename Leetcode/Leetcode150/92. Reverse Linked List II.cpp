#include <iostream>
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

// Insert at tail
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

// Reverse the linked list
Node *reverse_list(Node *head)
{
    Node *prev = NULL;
    Node *current = head;

    while (current != NULL)
    {
        Node *next = current->next; // Store next node
        current->next = prev;       // Reverse current node's pointer
        prev = current;             // Move prev and current forward
        current = next;
    }

    return prev; // New head
}

// Print the list
void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    head = reverse_list(head);
    print_list(head);

    return 0;
}