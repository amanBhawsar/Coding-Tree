/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Should return true if tree is Sum Tree, else false
int sumBT(Node* root)
{
    if(root==NULL){
        return 0;
    }
    return (root->data + sumBT(root->left) + sumBT(root->right));
}
bool isSumTree(Node* root)
{
     if(root==NULL){
         return true;
     }
     if(!root->left&&!root->right){
         return true;
     }
     if(root->data == (sumBT(root->left)+sumBT(root->right))){
         return (isSumTree(root->left))&&(isSumTree(root->right));
     }
     return false;
}
