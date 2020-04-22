class Solution {
public:
    bool checkValidString(string s) {
        int minOpen=0,maxOpen=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                minOpen++;
                maxOpen++;
            }else if(s[i]==')'){
                minOpen--;
                maxOpen--;
            }else{
                minOpen--;
                maxOpen++;
            }
            if(maxOpen<0){
                return false;
            }
            minOpen=max(minOpen,0);
        }
        return minOpen==0;
    }
};