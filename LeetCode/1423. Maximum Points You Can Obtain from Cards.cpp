class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int i=0,j=cardPoints.size()-1,maxi=0;
        int f[k+1];
        int b[k+1];
        f[0]=0;
        f[0+1]=cardPoints[0];
        for(int i=1;i<k;i++){
            f[i+1]=cardPoints[i];
            f[i+1]+=f[i];
        }
        if(k==cardPoints.size()){
            return f[cardPoints.size()];
        }
        int z=1;
        b[0]=0;
        b[z]=cardPoints[cardPoints.size()-1];
        z++;
        for(int i=cardPoints.size()-2;i>cardPoints.size()-k-1;i--){
            b[z]=cardPoints[i];
            b[z]+=b[z-1];
            z++;
        }
        for(int i=0;i<=k;i++){
            maxi=max(maxi,f[i]+b[k-i]);
        }     
        return maxi;
    }
};