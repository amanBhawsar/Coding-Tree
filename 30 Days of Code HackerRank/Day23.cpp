	void levelOrder(Node * root){
        if(root==NULL){
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp = q.front();
            cout << temp->data << " ";
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }  
	}