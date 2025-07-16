/* 
leetcode
https://leetcode.com/problems/remove-duplicates-from-sorted-list/?envType=problem-list-v2&envId=linked-list
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;
        while (tmp != NULL && tmp->next != NULL) {
            if (tmp->val == tmp->next->val) {
                 ListNode* duplicate = tmp->next; 
                tmp->next = tmp->next->next;

                 delete duplicate; 
            } else {
                tmp = tmp->next;
            }
        }
        return head;
    }
};
 */




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

void insert_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void removesDuplicates(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            Node *duplicate = tmp->next;
            tmp->next = tmp->next->next;

            delete duplicate;
        }
        else
        {
            tmp = tmp->next;
        }
    }
}

void printList(Node *head)
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
    int val;
    while (cin >> val && val != -1)
    {
        insert_tail(head, val);
    }
    removesDuplicates(head);
    printList(head);

    return 0;
}