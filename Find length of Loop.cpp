int countNodesinLoop(struct Node *head)
{
    int f=0;
     Node *fast=head;
     Node *slow=head;
     while(slow && fast && fast->next){
         slow = slow->next;
         fast = fast->next->next;
         if(fast==slow){
             f=1;
             break; 
         }
     }
     if(f==0){
         return 0;
     }
     int count =1;
     fast = fast->next;
     while(fast!=slow){
         count++;
         fast = fast->next;
     }
     return count;
}