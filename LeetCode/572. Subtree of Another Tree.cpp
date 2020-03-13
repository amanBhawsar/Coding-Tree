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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return true;
        if(p!=NULL && q!=NULL){
            if(p->val==q->val)
                return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
            return false;
        }
        return false;
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(isSameTree(s,t)==true)
            return true;
        if(s==NULL)
            return false;
        return isSubtree(s->left,t)||(isSubtree(s->right,t));
    }
};