class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n=s1.size();
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(s1[i]>=s2[i]){
                c1++;   
            }
            if(s1[i]<=s2[i]){
                c2++;
            }
        }
        if(c1==n || c2==n){
            return true;
        }
        return false;
    }
};