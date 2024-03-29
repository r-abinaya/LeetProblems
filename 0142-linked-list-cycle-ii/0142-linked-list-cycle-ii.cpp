/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // unordered_set<ListNode*> st;
        // while(head)
        // {
        //     if(st.find(head)!=st.end())
        //         return head;
        //     st.insert(head);
        //     head=head->next;
        // }
        // return NULL;
        if(head == NULL||head->next == NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* entry=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(slow!=entry)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                return slow;
            }
            
        }
        return NULL;
        
    }
};