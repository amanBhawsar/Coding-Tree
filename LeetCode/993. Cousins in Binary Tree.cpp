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
    pair<int,int> height(TreeNode* root,int x){
        if(root==NULL){
            return {0,-1};    
        }
        if(root->left!=NULL && root->left->val==x){
            return {1,root->val};
        }else if(root->right!=NULL && root->right->val==x){
            return {1,root->val};
        }else{
            pair<int,int> pp = height(root->left,x);
            if(pp.second!=-1){
                pp.first=pp.first+1;
                return pp;
            }
            pair<int,int> pk = height(root->right,x);
            if(pk.second!=-1){
                pk.first=pk.first+1;
                return pk;
            }
            return {0,-1};
        }
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int,int> p1=height(root,x);
        pair<int,int> p2=height(root,y);
        // cout << p1.first << " " << p1.second << "\n";
        // cout << p2.first << " " << p2.second << "\n";
        if(p1.first==p2.first && p1.second!=p2.second){
            return true;
        }
        return false;
    }
};