class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        vector<pair<int,int>> v;
        set<int> dp;
        set<int>::iterator itr;
        for(int i=0;i<reservedSeats.size();i++){
            v.push_back({reservedSeats[i][0],reservedSeats[i][1]});
            dp.insert(reservedSeats[i][0]);
        }
        sort(v.begin(),v.end());
        bool flag=false;
        int c=4,ans=0,i;
        for(itr=dp.begin();itr!=dp.end();itr++){
            flag=false;
            i=*itr;
            //2
            c=4;
            for(int j=2;j<=5;j++){
                if(binary_search(v.begin(), v.end(), make_pair(i,j)))
                    c--;
            }
            flag = (c==4 ? true:false);
            if(flag)    
                ans++;
            c=4;
            //4
            if(flag!=true){
                for(int j=4;j<=7;j++){
                    if(binary_search(v.begin(), v.end(),  make_pair(i,j)))
                        c--;
                }
                flag = (c==4 ? true:false);
                if(flag)    
                    ans++;
            }
            else{
                flag=false;
            }
            c=4;
            //6
            if(flag!=true){
                for(int j=6;j<=9;j++){
                    if(binary_search(v.begin(), v.end(), make_pair(i,j)))
                        c--;
                }
                flag = (c==4 ? true:false);
                if(flag)    
                    ans++;
            }
        }
        ans+=(n-dp.size())*2;
        return ans;
    }
};