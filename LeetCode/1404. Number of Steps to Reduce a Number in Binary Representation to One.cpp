class Solution {
public:
    int numSteps(string s) {
        int ans=0,i=s.size()-1;
        while(s.size()!=1){
            if(s[s.size()-1]=='1'){
                int f=0;
                for(int j=s.size()-1;j>=0;j--){
                    if(s[j]=='1'){
                        s[j]='0';
                        f=1;
                    }else{
                        s[j]='1';
                        f=0;
                        break;
                    }
                }
                if(f==1){
                    //carry +nt
                    s.insert(0,"1");
                }
                ans+=2;
                s.pop_back();
            }else{
                s.pop_back();
                ans++;
            }            
        }
        return ans;
    }
};