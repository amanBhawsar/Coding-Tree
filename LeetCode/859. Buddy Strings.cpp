class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size()!=B.size()){
            return false;
        }
        int n=A.size();
        vector<int> index;
        int eq1[26]={0};
        int eq2[26]={0};
        for(int i=0;i<n;i++){
            if(A[i]!=B[i]){
                index.push_back(i);
            }
            eq1[A[i]-'a']++;
            eq2[B[i]-'a']++;
        }
        if(index.size()==0){
            bool ans=false;
            for(int i=0;i<26;i++){
                if(eq1[i]>=2 || eq2[i]>=2)
                    return true;
            }
            return false;
        }
        if(index.size()==2){
            if(A[index[0]]==B[index[1]] && A[index[1]]==B[index[0]])
                return true;
            return false;
        }
        return false;
    }
};