class Solution {
public:
    int maxDiff(int num) {
        string sl=to_string(num);
        string sh=to_string(num);
        int maxi=INT_MIN,f=0;
        if(sl[0]!='1'){
            maxi=sl[0]-'0';
            f=1;
        }else{
            for(int i=0;i<sl.size();i++){
                if(sl[i]=='1' || sl[i]=='0'){

                }else{
                    maxi=sl[i]-'0';
                    break;
                }
            }
        }
        
        for(int i=0;i<sl.size();i++){
            if(sl[i]-'0'==maxi){
                if(f==1){
                    sl[i]='1';
                }else{
                    sl[i]='0';   
                }
            }
        }
        for(int i=0;i<sh.size();i++){
            if(sh[i]!='9'){
                maxi=sh[i]-'0';
                break;
            }
        }
        for(int i=0;i<sh.size();i++){
            if(sh[i]-'0'==maxi){
                sh[i]='9';   
            }
        }
        // cout << sh << " " << sl<<"\n";
        return abs(stoi(sh)-stoi(sl));
    }
};