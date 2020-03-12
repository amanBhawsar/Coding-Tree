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
        ListNode* prev=NULL;
        ListNode* curr=head,*nxt;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        ListNode* temp = head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        len=(len+1)/2;
        temp = head;
        len-=1;
        while(len>0){
            len--;
            temp=temp->next;
        }
        temp->next = reverseList(temp->next);
        temp=temp->next;
        while(temp!=NULL && head!=NULL){
            if(head->val != temp->val){
                return false;
            }
            temp=temp->next;
            head=head->next;
        }
        return true;
    }
};