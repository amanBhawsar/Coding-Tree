class Solution {
public:
    double average(vector<int>& s) {
        int n=s.size(),maxi=INT_MIN,mini=INT_MAX;
        double sum=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,s[i]);
            mini=min(mini,s[i]);
            sum+=s[i];
        }
        sum-=(maxi+mini);
        return (sum/(double)(n-2));
    }
};