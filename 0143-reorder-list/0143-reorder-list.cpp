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
    void reorderList(ListNode* head) {
       if(!head || !head->next || !head->next->next)
           return;
        ListNode* p=head;
        while(p->next->next) p=p->next;
        p->next->next=head->next;
        head->next=p->next;
        p->next=NULL;
        reorderList(head->next->next);
    }
};

