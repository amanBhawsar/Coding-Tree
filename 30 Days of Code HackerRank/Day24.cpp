          Node* removeDuplicates(Node *head)
          {
              if(head==NULL){
                  return NULL;
              }
              int d = head->data;
              Node* temp = head;
              while(temp!=NULL && temp->data==d){
                temp=temp->next;  
              }
              temp=removeDuplicates(temp);
              head->next=temp;
              return head;
          }