class Solution {
public:
    string reformat(string s) {
        string ch;
        string in;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='0' & s[i]<='9'){
                ch+=s[i];
            }else{
                in+=s[i];
            }
        }
        if(abs(int(ch.size()-in.size()))>1){
            return "";
        }
        if(ch.size()>in.size()){
            int j=0,k=0;
            for(int i=0;i<n;i+=2){
                s[i]=ch[j++];
                s[i+1]=in[k++];
            }
        }else{
            int j=0,k=0;
            for(int i=0;i<n;i+=2){
                s[i]=in[j++];
                s[i+1]=ch[k++];
            }
        }
        return s;
    }
};