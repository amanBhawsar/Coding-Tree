class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int maxi=INT_MIN,mini=INT_MAX,n=satisfaction.size();
        for(int i=0;i<n;i++){
            if(satisfaction[i]>maxi)
                maxi=satisfaction[i];
            if(satisfaction[i]>0){
                mini=min(mini,satisfaction[i]);
            }
        }
        if(maxi<=0)
            return 0;
        sort(satisfaction.begin(),satisfaction.end());
        int z=1,ans=0,i;
        int max_ans=0;
        for(int j=0;j<n;j++){
            z=1;
            ans=0;
            for(int k=j;k<n;k++){
                ans+=z*satisfaction[k];
                z++;
            }
            max_ans=max(max_ans,ans);
        }
        return max_ans;
    }
};