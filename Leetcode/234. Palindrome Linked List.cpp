






/* class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* tmp = head;
        while (tmp != NULL) {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        vector<int> v2;
        v2 = v;
        reverse(v2.begin(), v2.end());
        if (v == v2)
            return true;
        else
            return false;
    }
}; */
