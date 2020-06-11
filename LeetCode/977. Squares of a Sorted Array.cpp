class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans;
        int i=0,j=0,n=A.size(),a,b;
        while(i<n && A[i]<0){
            i++;
        }
        j=i;
        i--;
        while(i>=0 && j<n){
            a=A[i]*A[i];
            b=A[j]*A[j];
            if(a > b){
               ans.push_back(b);
                j++;
            }else{
                ans.push_back(a);
                i--;
            }
        }
        while(i>=0){
            ans.push_back(A[i]*A[i]); i--;
        }
        while(j<n){
            ans.push_back(A[j]*A[j]); j++;
        }
        return ans;
    }
};