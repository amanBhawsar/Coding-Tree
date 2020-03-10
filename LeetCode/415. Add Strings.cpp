class Solution {
public:
    string addStrings(string a, string b) {
        string ans;
        int i=a.size()-1,j=b.size()-1,k=0;
        while(i>=0 && j>=0){
            k+=(a[i]-'0')+(b[j]-'0');
            ans.push_back('0'+ k%10);
            if(k>=10)
                k=1;
            else
                k=0;
            i--;j--;
        }
        while(i>=0){
            k+=(a[i]-'0');
            ans.push_back('0'+ k%10);
            if(k>=10)
                k=1;
            else
                k=0;
            i--;
        }
        while(j>=0){
            k+=(b[j]-'0');
            ans.push_back('0'+ k%10);
            if(k>=10)
                k=1;
            else
                k=0;
            j--;
        }
        if(k)
            ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};