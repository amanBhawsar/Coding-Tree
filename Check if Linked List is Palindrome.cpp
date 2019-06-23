bool isPalindrome(Node *head)
{
    Node* temp = head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    int c = count/2;
    temp = head;
    count = (count+1)/2;
    while(count--){
        temp = temp->next;
    }
    Node *current = temp;
    Node *prev = NULL, *next = NULL;
    while (current != NULL){
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    temp = prev; 
    while(c--){
        // cout << head->data << " "<<temp->data;
        if(head->data==temp->data){
            temp = temp->next;
            head = head->next;
        }else{
            return false;
        }
    }
    return true;
}
