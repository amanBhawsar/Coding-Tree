class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0,index=-1,lastMatch=0;
        if(needle.size()==0){
            return 0;
        }
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[j]){
                j++;
                if(lastMatch==-1){
                    lastMatch=i;
                }
                if(j==needle.size()){
                    index=i-needle.size()+1;
                    break;
                }
            }else{
                if(lastMatch==-1){
                    continue;
                }
                j=0;
                i=lastMatch;
                lastMatch=-1;
            }
        }
        return index;
    }
};