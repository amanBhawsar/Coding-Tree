 bool compare(pair<int,int> &p1,pair<int, int> &p2){
        if (p1.second == p2.second) 
            return p1.first < p2.first; 
        return p1.second > p2.second; 
    }
class Solution {
public: 
    
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        int n = arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int z=mp.size(),pk=0;
        pair<int, int> v[z];
        for (auto it = mp.begin(); it != mp.end(); ++it) 
            v[pk++]={it->first, it->second};
        sort(v, v + z, compare);
        
        int ans=0;
        for(int i=z-1;i>=0;i--){
            if(v[i].second<=k){
                k-=v[i].second;
            }else{
                ans++;
            }
        }
        return ans;
    }
};