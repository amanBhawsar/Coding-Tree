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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0){
            return head;
        }
        ListNode* t1=head;
        ListNode* t2=head;
        while(n--){
            t1=t1->next;
        }
        if(t1==NULL)
            return head->next;
        while(t1->next!=NULL){
            t1=t1->next;
            t2=t2->next;
        }
        t2->next=t2->next->next;
        return head;
    }
};