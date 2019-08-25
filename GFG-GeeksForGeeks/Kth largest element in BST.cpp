/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The Node structure is defined as
struct Node
{
    int key;
    Node *left, *right;
}; */
/*Complete the function below*/
int c=0,ans;
void inorderModify(Node*root,int k){
    if(root){
        inorderModify(root->right,k);
        c++;
        if(c==k){
            ans=root->key;
        }
        inorderModify(root->left,k);
    }
}
void kthLargest(Node *root, int k){
    inorderModify(root,k);
    c=0;
    cout << ans << endl;
}
