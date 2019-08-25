int detectloop(Node *head) {
    
    Node *fast=head;
     Node *slow=head;
     while(slow && fast && fast->next){
         slow = slow->next;
         fast = fast->next->next;
         if(fast==slow){
             return 1; 
         }
     }
     return 0;
    
}