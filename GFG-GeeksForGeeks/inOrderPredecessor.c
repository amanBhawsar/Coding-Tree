int arr[100000];
int i=0;
void inorder(Node* root){
    if(root){
        inorder(root->left);
        arr[i] = root->data;
        i++;
        inorder(root->right);
    }
}
int inOrderPredecessor(Node* root, int aData) {
    inorder(root);
    int j,f=0;
    for(j=0;j<=i;j++){
        if(aData == arr[j]){
            f=1;
            break;
        }
    }
    if((j>0)&&(f==1)){
        return arr[j-1];
    }
    else {
        return -1;
    }
}
/*
In Binary Tree, Inorder predecessor of a node is the previous node in Inorder traversal of the Binary
Tree. Inorder predecessor is NULL for the first node in Inoorder traversal.
Write a function int inOrderPredecessor(Node* root, int aData) , that returns the value of node that
precedes the node with value aData.
The structure if the Node is given by:
struct node
{
int data;
struct node *left;
struct node *right;
};
typedef struct node Node;
Constraints:
Number of nodes in the tree can be as many as 10000.
All data inside the nodes are positive.
You can assume that aData is in the tree.
Input:
Your function receives two parameters, root pointer to the tree and data value for which the inorder
predecessor is to be found.
*/
