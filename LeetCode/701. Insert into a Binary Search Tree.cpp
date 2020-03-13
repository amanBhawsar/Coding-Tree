/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=root;
        if(root==NULL){
            return(new TreeNode(val));
        }
        while(1){
            if(temp->val > val){
                cout << "left";
                if(temp->left==NULL){
                    TreeNode* nod = new TreeNode(val);
                    temp->left=nod;
                    break;
                }else{
                    temp=temp->left;
                }
            }else{
                cout << "right";
                if(temp->right==NULL){
                    TreeNode* nod = new TreeNode(val);
                    temp->right=nod;
                    break;
                }else{
                    temp=temp->right;
                }
            }
        }
        return root;
    }
};