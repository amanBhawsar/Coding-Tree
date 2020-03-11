/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        vector<int> level;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);        
        int f=0;
        Node* node;
        while(!q.empty()){
            if(f==1){
                q.push(NULL);
                f=0;
            }
            
            if(q.front()==NULL){
                f=1;
                ans.push_back(level);
                level.clear();
                q.pop();
            }else{
                node=q.front();
                q.pop();
                level.push_back(node->val);
                for(int i=0;i<node->children.size();i++){
                    if(node->children[i]!=NULL)
                        q.push(node->children[i]);
                }
            }
        }
        return ans;
    }
};