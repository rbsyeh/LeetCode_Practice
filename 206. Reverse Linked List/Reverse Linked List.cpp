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
    ListNode* reverseList(ListNode* head) {
       ListNode* ans = NULL;     //ans:NULL
       ListNode* next;           //head:1->2->3->4->5->NULL
        while(head!=nullptr){    //first                 second             third              forth                 fifth
            next = head->next;   //next:2->3->4->5->NULL next:3->4->5->NULL next:4->5->NULL    next:5->NULL          next:NULL  
            head->next = ans;    //head:1->NULL          head:2->1->NULL    head:3->2->1->NULL head:4->3->2->1->NULL head:5->4->3->2->1->NULL
            ans = head;          //ans: 1->NULL           ans:2->1->NULL     ans:3->2->1->NULL  ans:4->3->2->1->NULL  ans:5->4->3->2->1->NULL
            head = next;         //head:2->3->4->5->NULL head:3->4->5->NULL head:4->5->NULL    head:5->NULL          head:NULL
        }  
        return ans;  
    }
};
