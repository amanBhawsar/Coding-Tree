int max(int a, int b){
    return (a>b?a:b);
}
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> se;
        int maxi=0,prevInd=0;
        for(int i=0;i<s.size();i++){
            if(i-prevInd == se.size()){
                se.insert(s[i]);
                // cout << se.size() << " ";
                maxi = max(maxi,se.size());
            }else{
                se.erase(s[prevInd]);
                prevInd++;
                i--;
                se.insert(s[i]);
            }
        }
        return maxi;
    }
};