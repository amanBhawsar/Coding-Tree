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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return head;
        int len=0;
        ListNode* t=head,*p=head;
        while(t){
            t=t->next;
            len++;
        }
        k=k%len;
        if(k==0)
            return head;
        t=head;
        while(k--){
            t=t->next;
        }
        while(t->next!=NULL){
            t=t->next;
            p=p->next;
        }
        ListNode* pre=p;
        p=p->next;
        t->next=head;
        pre->next=NULL;
        return p;
    }
};