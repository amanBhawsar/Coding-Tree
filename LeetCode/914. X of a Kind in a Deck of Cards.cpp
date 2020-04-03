class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> umap;
        for(int i:deck)
            umap[i]++;
        int f=0,gcdd;
        for(auto m:umap){
            if(f==0){
                gcdd=m.second;
            }
            f=1;
            gcdd=__gcd(gcdd,m.second);
        }
        return gcdd!=1;
    }
};