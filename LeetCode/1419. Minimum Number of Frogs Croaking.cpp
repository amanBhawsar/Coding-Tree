class Solution {
public:

    int minNumberOfFrogs(string s) {
        int commonF=0,n=s.size(),c=0,maxi=INT_MIN;
        unordered_map<char,vector<int>> umap;
        for(int i=0;i<n;i++){
            umap[s[i]].push_back(i);   
        }
        if((umap['c'].size() == umap['r'].size()) && (umap['c'].size() == umap['o'].size()) && (umap['c'].size() == umap['a'].size()) && (umap['c'].size() == umap['k'].size())){
            n=umap['c'].size();
            int prev=-10;
            for(int i=0;i<n;i++){
                if(umap['c'][i] < umap['r'][i] && umap['r'][i] < umap['o'][i] && umap['o'][i] < umap['a'][i] && umap['a'][i] < umap['k'][i]){
                    if(c==0){
                        int pk=0;
                        for(int j=0;j<s.size();j++){
                            if(s[j]=='c'){
                                pk++;
                            }
                            if(s[j]=='k'){
                                pk--;
                            }
                            maxi=max(maxi,pk);
                        }
                        c=-1;
                    }
                }else{
                    return -1;
                }
            }       
            return maxi;
        }else{
            return -1;
        }
    }
};