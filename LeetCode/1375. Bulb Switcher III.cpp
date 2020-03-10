class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        long int sumN=0,prevS=0;
        int ans=0;
        for(int i=0;i<light.size();i++){
            sumN+=i+1;
            prevS+=light[i];
            if(sumN==prevS)
                ans++;
        }
        return ans;
    }
};