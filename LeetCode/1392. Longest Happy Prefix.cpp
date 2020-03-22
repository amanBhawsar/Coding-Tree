class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        int kmp[n];
        kmp[0]=0;
        int l=0,i=1;
        while(i<n){
            if(s[i]==s[l]){
                l++;
                kmp[i]=l;
                i++;
            }else{
                if(l!=0){
                    l=kmp[l-1];
                }else{
                    kmp[i]=0;
                    i++;
                }
            }
        }
        int c=0;
        int s1=max(kmp[n-1],n/2);
        string ans;
        string ans1="";
        for(i=0;i<s1;i++){
            ans1+=s[i];
        }
        size_t f1 = s.find(ans1);
        size_t f11 = s.rfind(ans1);
        if (f1 != string::npos && f1==0 && f11 != string::npos && f11==s.size()-ans1.size() ) {
            c++;
            ans=ans1;
        }           
        int s2=min(kmp[n-1],n/2);
        string ans2="";
        for(i=0;i<s2;i++){
            ans2+=s[i];
        }
        
        
        size_t f2 = s.find(ans2); 
        size_t f22 = s.rfind(ans2); 
        
        if (f2 != string::npos && f2 == 0  && f22 != string::npos && f22==s.size()-ans2.size() ) {
            ans=ans2;
            c++;
        }     
        
        if(c==2){
            if(ans1.size()>ans2.size()){
                return ans1;
            }
            return ans2;
        }
        return ans;
    }
};