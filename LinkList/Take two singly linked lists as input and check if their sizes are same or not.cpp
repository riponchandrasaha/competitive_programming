#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int getsize(Node *head) {
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count; // 🛠️ missing return!
}

int main() {
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;

    // First list input
    while (cin >> val && val != -1) {
        insert_at_tail(head1, tail1, val);
    }

    // Second list input
    while (cin >> val && val != -1) {
        insert_at_tail(head2, tail2, val);
    }

    int s1 = getsize(head1);
    int s2 = getsize(head2);

    if (s1 == s2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
