class Solution {
public:
    int compress(vector<char>& chars) {
        int i,j=0,n=chars.size(),c=0,k=0;
        for(i=0;i<n && j<n;){
            if(chars[i]==chars[j]){
                c++;
                j++;
            }else{
                chars[k++]=chars[i];
                string ss=to_string(c);
                if(ss!="1")
                    for(int z=0;z<ss.size();z++)
                        chars[k++]=char(ss[z]);
                c=0;
                i=j;
            }
        }
        chars[k++]=chars[i];
        string ss=to_string(c);
        if(ss!="1")
            for(int z=0;z<ss.size();z++)
                chars[k++]=char(ss[z]);

        return k;        
    }
};