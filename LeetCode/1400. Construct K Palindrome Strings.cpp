class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        if(n<k)
            return false;
        int arr[26]={0};
        for(int i=0;i<n;i++)
            arr[s[i]-'a']++;
        int left=0,c=0,z=0;
        for(int i=0;i<26;i++){
            if(arr[i]%2!=0)
                left++;
            c+=arr[i]/2;
            if(arr[i]!=0)
                z++;
        }
        if(left-1>=k)
            return false;
        if(left>0){
            left--;
            c=c*2+1;
        }else{
            c=c*2;
        }
        if(left+c>=k && k>left)
            return true;
        return false;
    }
};