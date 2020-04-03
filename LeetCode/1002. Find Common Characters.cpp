class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        if(A.size()==1){
            vector<string> ans;
            for(int i=0;i<A[0].size();i++)
                ans.push_back(string(1,A[0][i]));
            return ans;
        }
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int j=A[0].size()-1;j>=0;j--){
                b[A[0][j]-'a']++;
        }
        for(int i=A.size()-1;i>=1;i--){
            for(int j=A[i].size()-1;j>=0;j--){
                a[A[i][j]-'a']++;   
            }
            for(int j=0;j<26;j++){
                b[j]=min(b[j],a[j]);
                a[j]=0;
            }
        }
        vector<string> ans;
        for(int j=0;j<26;j++){
            while(b[j]>0){
                b[j]--;
                ans.push_back(string(1,(j+'a')));
            }
        }
        return ans;
    }
};