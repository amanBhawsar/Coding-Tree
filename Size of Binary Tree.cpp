/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */
/* Computes the number of nodes in a tree. */
int getSize(Node* r)
{
    if(r==NULL){
         return 0;
    }
    return 1+getSize(r->left) + getSize(r->right);
}
