class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> umap;
        int maxi=-1;
        umap['b']=0;
        umap['a']=0;
        umap['l']=0;
        umap['o']=0;
        umap['n']=0;
        for(int i=text.size()-1;i>=0;i--){
            umap[text[i]]++;
        }
        maxi=min(umap['l'],umap['o']);
        maxi>>=1;
        maxi=min(maxi,umap['n']);
        maxi=min(maxi,umap['b']);
        maxi=min(maxi,umap['a']);
        return maxi;
    }
};