/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head,int x)
{
    if(head==NULL){
        return NULL;
    }
    if(head->data==x){
        return deleteAllOccurances(head->next,x);
    }
    if(head->data!=x){
        head->next=deleteAllOccurances(head->next,x);
        return head;
    }
}
