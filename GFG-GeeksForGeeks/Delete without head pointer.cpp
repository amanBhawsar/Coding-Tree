/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list node
struct Node
{
    int data;
    Node* next;
}*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{
    Node *del=node;
    int count=0;
    while(node){
        node=node->next;
        count++;
    }
    node=del;
    for(int i=0;i<count-1;i++){
        node->data = (node->next)->data;
        if(node->next->next==NULL){
            node->next = NULL;
            break;
        }
        node = node->next;
    }
}
