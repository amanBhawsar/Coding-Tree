class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> umap;
        for(int i=0;i<words.size();i++){
            umap[words[i]]++;
        }
        vector<pair<int,string>> v;
        for (auto x : umap){
            if(x.second>=1)
                v.push_back({x.second,x.first});        
        }
        sort(v.begin(),v.end());
        vector<string> ans;
        int j=v.size()-1;
        for(int i=v.size()-1;;i--){
            if(i>=1 && v[i].first==v[i-1].first){
                              
            }else{
                for(int m=i;m<=j;m++){
                    ans.push_back(v[m].second);
                    if(ans.size()==k)
                        return ans;
                }
                j=i-1;
            }
        }
        return ans;
    }
};