class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        set<pair<int,int>> s;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int gcd = __gcd(i,j);
                s.insert({i/gcd,j/gcd});
            }
        }
        vector<string> ans;
        for(auto i:s){
            if(i.first<i.second){
                string k,z;
                k=to_string(i.first);
                k.push_back('/');
                z=to_string(i.second);
                for(int j=0;j<z.size();j++){
                    k.push_back(z[j]);
                }
                ans.push_back(k);
            }
        }
        return ans;
    }
};