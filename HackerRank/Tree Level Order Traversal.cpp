
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* a=q.front();
            cout<<a->data<<" ";
            if(a->left!=NULL){
                q.push(a->left);
            }
            if(a->right!=NULL){
                q.push(a->right);
            }
            q.pop();
        }

    }
