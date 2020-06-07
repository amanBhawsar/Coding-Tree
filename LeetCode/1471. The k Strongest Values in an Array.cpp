class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int med = (n-1)/2;
        med=arr[med];
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({abs(arr[i]-med),arr[i]});
        }
        sort(v.rbegin(),v.rend());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};