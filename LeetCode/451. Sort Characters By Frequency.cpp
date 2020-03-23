class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        vector<pair<int,char>> v;
        for (auto x : umap){
            if(x.second>=1)
                v.push_back({x.second,x.first});        
        }
        string ans="";
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            while(v[i].first--){
                ans+=v[i].second;
            }
        }
        return ans;
    }
};