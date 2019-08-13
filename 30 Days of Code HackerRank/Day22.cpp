        int max(int a,int b){
            if(a>=b){
                return a;
            }
            return b;
        }

		int getHeight(Node* root){
          if(root==NULL){
              return 0;
          }
          if(root->left==NULL && root->right==NULL){
              return 0;
          }
          return 1+max(getHeight(root->left),getHeight(root->right));
        }