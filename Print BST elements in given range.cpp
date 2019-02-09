/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST Node is as follows:
struct Node
{
    int data;
    Node * right, * left;
}; */

void inorderModify(Node*root,int l,int r){
    if(root){
        inorderModify(root->left,l,r);
        if((root->data>=l)&&(root->data<=r)){
            cout << root->data << " ";
        }
        inorderModify(root->right,l,r);
    }
}
void printNearNodes(Node *root, int l, int h)
{
      inorderModify(root,l,h);
}
