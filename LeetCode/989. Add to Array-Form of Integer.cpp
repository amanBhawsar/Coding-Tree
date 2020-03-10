class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int k) {
        int j=A.size()-1,c=0,temp=0;
        while(k!=0 && j>=0){
            A[j]+=c + k%10;
            k/=10;
            c=A[j]/10;
            A[j]%=10;
            j--;
        }
        while(k!=0){
            temp=c + k%10;
            k/=10;
            c=temp/10;
            temp%=10;
            A.insert(A.begin(),temp);
        }
        while(j>=0){
            A[j]+=c;
            c=A[j]/10;
            A[j]%=10;
            j--;
        }
        if(c)
            A.insert(A.begin(),1);
        return A;
    }
};