/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *h = head;
        vector<int> op;
        while(h!= NULL) {
            op.push_back(h->val);
            h= h->next;
        }
        for(int i=0, j=op.size()-1; i<op.size()/2; i++, j--) {
            if(op[i] != op[j]) return false;
        }
        return true;
    }
};