/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    int lCount;

    Node* left;
    Node* right;
};*/
int c=0,ans;
void inorderModify(Node*root,int k){
    if(root){
        inorderModify(root->left,k);
        c++;
        if(c==k){
            ans=root->data;
        }
        inorderModify(root->right,k);
    }
}

int KthSmallestElement(Node *root, int k)
{
    inorderModify(root,k);
    c=0;
    return ans;
}
