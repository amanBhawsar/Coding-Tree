class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,f=0,k=s.size();
        while(s[k-1]==' '){
            k--;
        }
        for(i=k-1;i>=0;i--){
            if(s[i]==' '){
                f=1;
                break;
            }
        }
        return (f?k-i-1:k);
    }
};