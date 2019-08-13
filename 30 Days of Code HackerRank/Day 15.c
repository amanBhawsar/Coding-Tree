Node* insert(Node *head,int data)
{
    if(head==NULL){
        head=(Node*)malloc(sizeof(Node));
        head->data=data;
        head->next=NULL;
        return head;
    }
    else if(head->next==NULL){
        struct Node *temp=NULL;
        temp=(Node*)malloc(sizeof(Node));
        temp->data=data;
        temp->next=NULL;
        head->next=temp;
        return head;
    }
    else{
        head->next = insert(head->next,data);
    }
    return head;   
}