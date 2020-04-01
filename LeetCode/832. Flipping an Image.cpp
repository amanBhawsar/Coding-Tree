class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n=A.size(),i,j;
        for(int k=0;k<n;k++){
            i=0,j=A[k].size()-1;
            while(i<j)
                swap(A[k][i++],A[k][j--]);
            j=A[k].size();
            for(i=0;i<j;i++)
                A[k][i]=(A[k][i]+1)%2;
        }
        return A;
    }
};