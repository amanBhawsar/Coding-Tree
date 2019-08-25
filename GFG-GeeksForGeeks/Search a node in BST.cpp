/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Node structure
struct node {
    int data;
   struct node * right, * left;
};*/
/*You are required to complete this method*/
bool search(node* root, int x)
{
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    else if(root->data > x){
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
    }
    return false;
}
