Node* rotate(Node* head, int k) {
    Node* temp = head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    Node* mid = head;
    k = k%count;
    if(head==NULL || k==0){
        return head;
    }
    k--;
    while(k--){
        mid = mid->next;
    }
    Node* newHead = mid->next;
    temp = newHead;
    while(temp->next!=NULL){
        temp = temp ->next;
    }
    temp->next = head;
    mid->next=NULL;
    return newHead;
}