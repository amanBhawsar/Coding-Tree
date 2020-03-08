class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums1.size();i++){
            umap[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++){
            if(umap.find(nums2[i])!=umap.end()){
                umap[nums2[i]]=2;
            }
        }
        for (auto x : umap){
            if(x.second==2)
                ans.push_back(x.first);
        }
        return ans;
    }
};