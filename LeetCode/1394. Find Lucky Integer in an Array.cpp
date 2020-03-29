class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> umap;
        for(int i=0;i<arr.size();i++){
            umap[arr[i]]++;
        }
        int ans=-1;
        for(auto i:umap){
            if(i.first==i.second){
                if(ans<i.first)
                    ans=i.first;  
            }
        }
        return ans;
    }
};