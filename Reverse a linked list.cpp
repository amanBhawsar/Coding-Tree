Node* reverseList(Node *head)
{
  Node *curr=head,*prev=NULL,*nxt=NULL;
  while(curr!=NULL){
      nxt=curr->next;
      curr->next=prev;
      prev=curr;
      curr=nxt;
  }
  return prev;
}