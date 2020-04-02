class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> umap;
        int n=J.size(),c=0;
        for(int i=0;i<n;i++){
            umap[J[i]]++;
        }
        n=S.size();
        for(int i=0;i<n;i++)
            if(umap[S[i]]!=0)
                c++;
        return c;
    }
};