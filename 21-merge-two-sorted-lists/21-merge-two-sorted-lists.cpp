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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        else if(list2 == NULL) return list1;
        ListNode *t = list1;
        vector<int> op;
        while(t->next != NULL) {
            op.push_back(t->val);
            t =t->next;
        }
        op.push_back(t->val);
        t->next = list2;
        t =t->next;
        while(t != NULL) {
            op.push_back(t->val);
            t =t->next;
        }
        sort(op.begin(), op.end());
        t =list1;
        int i=0;
        while(t != NULL) {
            t->val = op[i++];
            t =t->next;
        }
        return list1;
    }
};