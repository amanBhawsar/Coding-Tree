void removeLoop(Node *head,Node *last){
    Node *ptr1 = head;
    Node *ptr2 = head;
    while(1){
        ptr2 = last;
        while(ptr2->next!=last && ptr2->next!=ptr1){
            ptr2=ptr2->next;
        }
        if (ptr2->next == ptr1) 
            break;
        ptr1=ptr1->next;
    }
    ptr2->next=NULL;
}


void removeTheLoop(Node *head)
{
     Node *fast=head;
     Node *slow=head;
     while(slow && fast && fast->next){
         slow = slow->next;
         fast = fast->next->next;
         if(fast==slow){
             removeLoop(head,fast);    
         }
     }
}
