/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
        struct ListNode *new = NULL;
        struct ListNode* head = NULL;
        struct ListNode* prev = NULL;
        int sum; 
        int rem=0;
        while(l1 || l2){
            sum=0;
            if(!l1){
                sum=l2->val + rem;
            }
            else if(!l2){
                sum=l1->val + rem;
            }
            else{
                sum = l1->val + l2->val + rem;
            }
            
            new = (struct ListNode*)malloc(sizeof(struct ListNode));
            new->val=sum;
            if(sum >= 10){
                new->val = sum%10;
                rem = 1;
            }
            else{
                new->val = sum;
                rem = 0;
            }
            if(head==NULL){
                head=new;
            }else{
                prev->next=new;
            }
            prev = new;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
     if(rem==1){
         new = (struct ListNode*)malloc(sizeof(struct ListNode));
         new->val=rem;
         prev->next=new;
         
     }
    new->next = NULL;
    return head;
}