/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Prints postorder traversal of Binary Tree.  In output
   all keys should be separated by space. For example
  postorder traversal of below tree should be "20 30 10"
         10
       /      \
    20       30 */
void postOrder(Node* root)
{
  if(root){
      postOrder(root->left);
      postOrder(root->right);
      cout << root->data;
      cout << " ";
  }
}
