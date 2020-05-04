class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> umap;
        for(int i=0;i<paths.size();i++){
            umap[paths[i][0]]--;
            umap[paths[i][1]]++;
        }
        for(auto i:umap){
            if(i.second==1){
                return i.first;
            }
        }
        return "";
    }
};