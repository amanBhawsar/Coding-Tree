class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26,0);
        for(int i=magazine.size()-1;i>=0;i--){
            count[magazine[i]-'a']++;
        }
        for(int i=ransomNote.size()-1;i>=0;i--){
            if(count[ransomNote[i]-'a']>0){
                count[ransomNote[i]-'a']--;
            }else{
                return false;
            }
        }
        return true;
    }
};