class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int ans=0,n=A.size(),k=A[0].size();
        set<int> s;
        for(int j=0;j<n-1;j++){
            for(int i=0;i<k;i++){
                if(A[j][i]>A[j+1][i]){
                    s.insert(i);
                }
            }
        }
        return s.size();
    }
};