class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(arr.begin(),arr.end());
        int miniAbs=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            miniAbs=min(miniAbs,abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<arr.size()-1;i++){
            if(miniAbs==abs(arr[i]-arr[i+1])){
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};