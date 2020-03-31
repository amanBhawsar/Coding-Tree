class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i,n=A.size();
        for(i=0;i<n-1;i++){
            if(A[i]!=A[i+1])
                break;
        }
        if(i==n-1){
            return true;
        }
        if(i+1<A.size() && A[i]>A[i+1]){
            for(int j=0;j<n-1;j++)
                if(A[j]<A[j+1])
                    return false;
            return true;
        }else if(i+1<A.size() && A[i]<A[i+1]){
            for(int j=0;j<n-1;j++)
                if(A[j]>A[j+1])
                    return false;
            return true;
        }
        return false;
    }
};