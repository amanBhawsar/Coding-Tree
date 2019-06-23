Node *removeDuplicates(Node *root){
    Node *curr = root;
    Node *nextDel = curr;
    if(!curr){
        return root;
    }
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            nextDel = (curr->next)->next;
            free(curr->next);
            curr->next = nextDel;
        }else{
            curr = curr->next;
        }
    }
    return root;
}