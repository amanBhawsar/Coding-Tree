class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int> ans;
        int n=p.size();
        for(int i=0;i<n;i++){
            int mini=0;
            for(int j=i+1;j<n;j++){
                if(p[j]<=p[i]){
                    mini=p[j];
                    break;
                }
            }    
            ans.push_back(p[i]-mini);
        }
        return ans;
    }
};