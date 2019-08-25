/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the height of binary tree with given root.  */
int height(Node* root)
{
   if(root==NULL){
       return 0;
   }
   return 1+((height(root->right)>height(root->left))?height(root->right):height(root->left));
}
