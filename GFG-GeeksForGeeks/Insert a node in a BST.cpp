/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST node is as follows:
struct node {
  int data;
  struct node * right, * left;
}; */
/* This function should insert a new node with given data and
   return root of the modified tree  */
struct node* insert(struct node* node, int data)
{
    if(node==NULL){
        struct node* ne = (struct node*)malloc(sizeof(struct node));
        ne->data = data;
        ne->left = NULL;
        ne->right = NULL;
        node=ne;
        return node;
    }
    if(node->data > data){
        node->left = insert(node->left,data);
    }
    else if(node->data < data){
        node->right = insert(node->right,data);
    }else{
        return node;//to handle duplicates
    }
    return node;
}
