class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap=0;
        for(int i=0;i<word.size();i++)
            if(word[i]>='A' && word[i]<='Z')
                cap++;
        return cap==0 || cap==word.size() || (cap==1 && word[0]>='A' && word[0]<='Z') ;      
    }
};