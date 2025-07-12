#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}


void insert_at_tail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}


void delete_at_index(Node*& head, int idx ) {
    if (head == NULL) return;

    if (idx == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (tmp == NULL || tmp->next == NULL) return;
        tmp = tmp->next;
    }

    if (tmp->next == NULL) return;

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    Node* head = NULL;

    for (int i = 0; i < t; i++) {
        int x, val;
        cin >> x >> val;

        if (x == 0) {
            insert_at_head(head, val);
        } else if (x == 1) {
            insert_at_tail(head, val);
        } else if (x == 2) {
            delete_at_index(head, val);
        }

        print_list(head);
    }

    return 0;
}
