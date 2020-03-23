class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a.size()==b.size()){
            if(a.compare(b)==0)
                return -1;
            return a.size();
        }
        return max(a.size(),b.size());
    }
};