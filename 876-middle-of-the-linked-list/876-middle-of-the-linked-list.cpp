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
    ListNode* middleNode(ListNode* head) {
        if (head == NULL) return head;
        ListNode * f = head, * s = head;
        while(s != NULL && s->next != NULL) {
            f = f->next;
            s = s->next;
            s = s->next;
        }
        return f;
    }
};