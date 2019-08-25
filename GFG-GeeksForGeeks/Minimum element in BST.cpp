/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the binary search tree is as
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
*/
// your task is to complete the below function
int minValue(struct node* root)
{
    if(root->left==NULL){
        return root->data;
    }
    return minValue(root->left);
}
