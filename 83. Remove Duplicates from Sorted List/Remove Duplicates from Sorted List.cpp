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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==nullptr)
            return NULL;
        ListNode* ans = head;
        ListNode* TOP = ans;
        int temp=head->val;
        head=head->next;
        while(head)
        {
            if(head->val!=temp)
            {
                temp=head->val;
                ans->next=head;
                ans=ans->next;
            }
            else
                ans->next=NULL;
            head=head->next;    
        }
        
        return TOP;
        
       
        
    }
};
