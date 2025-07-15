/* Take a doubly linked list as input and sort it in ascending order. Then print the list. */

#include <bits/stdc++.h>
using namespace std;

// Doubly Linked List Node
class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Insert at tail
void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head=NULL) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// Sort the linked list (using vector for simplicity)
void sort_list(Node*& head) {
    vector<int> vals;
    Node* temp = head;

    // Step 1: collect values into vector
    while (temp) {
        vals.push_back(temp->val);
        temp = temp->next;
    }

    // Step 2: sort the vector
    sort(vals.begin(), vals.end());

    // Step 3: assign sorted values back to nodes
    temp = head;
    int i = 0;
    while (temp) {
        temp->val = vals[i++];
        temp = temp->next;
    }
}

// Print list forward
void print_list(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        insert_tail(head, tail, val);
    }

    sort_list(head);
    print_list(head);

    return 0;
}
