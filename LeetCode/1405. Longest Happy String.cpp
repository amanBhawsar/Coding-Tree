class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        vector<pair<int,char>> vec;
        vec.push_back({a,'a'});
        vec.push_back({b,'b'});
        vec.push_back({c,'c'});
        sort(vec.begin(),vec.end());
        a=vec[2].first;
        b=vec[1].first;
        c=vec[0].first;
        int z=2;
        string ans;
        // cout << a <<" "<< b << " "<< c << endl;
        while(1){
            int f=0;
            if(a>0 && z==2){
                ans+=string(min(a,2),vec[2].second);
                a-=2;
                z=1;
                f=1;
            }
            if(a<=0){
                z=1;
            }
            if(b>0 && z==1){
                if(ans.size()>0 && ans.back()==vec[1].second){
                    if(ans[0]!=vec[1].second){
                        ans.insert(0,string(min(b,2),vec[1].second));
                        b-=2;
                        z=2;
                        f=1;
                    }
                }else{
                        ans+=string(min(b,2),vec[1].second);
                        b-=2;
                        z=2;
                        f=1;
                }                    
            }
            if(c>0 && z==1){
                if(ans.size()>0 && ans.back()==vec[0].second){
                    if(ans[0]!=vec[0].second){
                        ans.insert(0,string(min(c,2),vec[0].second));
                        c-=2;
                        z=2;
                        f=1;
                    }
                }else{
                        ans+=string(min(c,2),vec[0].second);
                        c-=2;
                        z=2;
                        f=1;
                }
            }
            if(f==0){
                break;
            }
        }
        int n=100;
        while(n--){
            if(a>0){
                for(int i=0;i<ans.size()-1;i++){
                    if(ans[i]!=vec[2].second && ans[i+1]!=vec[2].second){
                        ans.insert(i+1,string(min(a,2),vec[2].second));
                        a-=2;
                        break;
                    }
                }
            }
            if(b>0){
                for(int i=0;i<ans.size()-1;i++){
                    if(ans[i]!=vec[1].second && ans[i+1]!=vec[1].second){
                        ans.insert(i+1,string(min(b,2),vec[1].second));
                        b-=2;
                        break;
                    }
                }
            }
            if(c>0){
                for(int i=0;i<ans.size()-1;i++){
                    if(ans[i]!=vec[0].second && ans[i+1]!=vec[0].second){
                        ans.insert(i+1,string(min(c,2),vec[0].second));
                        c-=2;
                        break;
                    }
                }
            }
            // cout << a <<" "<< b << " "<< c << endl;
        }
        return ans;
    }
};