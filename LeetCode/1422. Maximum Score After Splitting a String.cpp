class Solution {
public:
    int maxScore(string s) {
        int n=s.size(),maxi=0,z=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                z++;
            }
        }
        maxi=z-1;
        for(int i=0;i<n;i++){
            int o=0;
            z=0;
            for(int k=0;k<i;k++){
                if(s[k]=='0'){
                    z++;
                }
            }
            for(int j=i;j<n;j++){
                if(s[j]=='1'){
                    o++;
                }
            }
            if(z==0 || o==0){
                o--;
            }
            maxi=max(maxi,z+o);
        }
        return maxi;
    }
};