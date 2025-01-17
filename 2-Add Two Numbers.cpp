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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int r = 0;
        int a = 0;
        int b = 0;
        ListNode* sol = new ListNode(0);
        ListNode* head = sol;
        while (l1 || l2)
        {
            a = ((l1) ? l1->val : 0);
            b = ((l2) ? l2->val : 0);
            if (a + b + r >= 10)
            {
                sol->next = new ListNode((a + b + r) % 10);
                sol = sol->next;
                r = (a + b + r) / 10;
            }
            else
            {
                sol->next = new ListNode((a + b + r));
                sol = sol->next;
                r = 0;
            }
            if (l1) {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
        }
        if (r)
            sol->next = new ListNode(r);

        return head->next;
    }
};