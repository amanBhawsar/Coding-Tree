class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int i=0,j=0,n=A.size(),c=0,ans=0;
        for(i=0;i<n;i++){
            if(A[i]==0)
                c++;
            while(c>K && j<n){
                if(A[j]==0)
                    c--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};