class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums1.size();i++){
            if(umap.find(nums1[i])!=umap.end())
                umap[nums1[i]]=umap[nums1[i]]+1;
            else
                umap[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++){
            if(umap.find(nums2[i])!=umap.end()){
                if(umap[nums2[i]]!=0){
                    umap[nums2[i]]=umap[nums2[i]]-1;
                    ans.push_back(nums2[i]);
                }
            }
        }
        return ans;
    }
};