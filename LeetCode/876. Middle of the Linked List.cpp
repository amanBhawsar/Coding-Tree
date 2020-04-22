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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            head=head->next;
            temp=temp->next->next;
        }
        return head;
    }
};