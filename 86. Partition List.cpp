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
    ListNode* partition(ListNode* head, int x) {
        if (!head)return nullptr;
        ListNode* a, * b, * c, * ac, * bc, * cc;
        a = b = c = nullptr;
        ac = bc = cc = nullptr;
        while (head)
        {
            if (head->val < x)
            {
                ListNode* z = head;
                head = head->next;
                if (!a)
                {
                    a = z;
                    z->next = nullptr;
                    ac = a;
                }
                else {
                    ac->next = z;
                    z->next = nullptr;
                    ac = z;
                }
            }
            else
            {
                ListNode* z = head;
                head = head->next;
                if (!c)
                {
                    c = z;
                    z->next = nullptr;
                    cc = c;
                }
                else {
                    cc->next = z;
                    z->next = nullptr;
                    cc = z;
                }
            }
        }
        if (ac)
        {
            ac->next = c;
            return a;
        }
        else
            return c;

    }
};