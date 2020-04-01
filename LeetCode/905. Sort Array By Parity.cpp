class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size(),ind=0;
        for(int i=0;i<n;i++){
            if(A[i]%2==0){
                swap(A[ind++],A[i]);
            }
        }
        return A;
    }
};