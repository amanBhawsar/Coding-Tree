class Solution {
public:
    string arrangeWords(string text) {
        transform(text.begin(), text.end(), text.begin(), ::tolower); 
        map<int,vector<string>> mp;
        int j=0,f=0;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                string s(text.begin()+j,text.begin()+i);
                mp[s.size()].push_back(s);
                j=i+1;
            }
        }
        string s(text.begin()+j,text.end());
        mp[s.size()].push_back(s);
        string ans;
        for(auto i:mp){
            for(auto k:i.second){
                for(int z=0;z<k.size();z++){
                    if(f==0){
                        ans.push_back(toupper(k[z]));
                        f=1;
                    }else{
                        ans.push_back(k[z]);
                    }
                }
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};