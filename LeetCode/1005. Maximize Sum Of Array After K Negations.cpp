class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int k) {
        sort(A.begin(),A.end());
        int sum=0,n=A.size(),mini=INT_MAX;
        for(int i=0;i<n && A[i]<=0;i++){
            if(k==0)
                break;
            A[i]=-A[i];
            k--;
        }
        for(int i=0;i<n;i++){
            sum+=A[i];
            mini=min(mini,A[i]);
        }
        return sum - (k%2)*mini*2;
    }
};