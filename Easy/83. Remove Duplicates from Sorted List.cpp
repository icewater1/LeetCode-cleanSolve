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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        if(p == nullptr || p->next == nullptr)return p;
        
        int cacheVal = p->val;
        do
        {
            if(p->next->val == cacheVal)
            {
                p->next = p->next->next;
            }
            else
            {
                p = p->next;
                cacheVal = p->val;
            }
        }while(p->next != nullptr);
        return head;
    }
};