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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l2==nullptr) return l1;
        if(l1==nullptr) return l2;
        
        ListNode* ans;
        
        if(l1->val<=l2->val)
        {
            ans=l1;
            
            ans->next=mergeTwoLists(l1->next, l2);
        }
        else
        {
            ans=l2;
            ans->next=mergeTwoLists(l1, l2->next);
        }
        
        return ans;
        
    }
};
