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
    bool hasCycle(ListNode* head) {
        set<ListNode*> ListMap;
        ListNode* p = head;
        while (p != NULL)
        {
            if (ListMap.count(p) == 0)
            {
                ListMap.insert(p);
                p = p->next;
            }
            else
                return true;

        }
        if (p == NULL) return false;
    }
};
