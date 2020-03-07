class Solution {
public:
    string reverseStr(string s, int k) {
        int prev=0,n=s.size(),i=0,f=0,j;
        while(i<n){
            if(n-i>=k){
                if(f==0){
                    int z=i;
                    j=i+k-1;
                    while(i<j){
                        swap(s[i],s[j]);
                        i++;j--;
                    }
                    f=1;
                    i=z+k;
                }else{
                    i+=k;
                    f=0;
                }
            }else{
                if(f==0){
                    j=n-1;
                    while(i<j){
                        swap(s[i],s[j]);
                        i++;j--;
                    }
                }
                break;
            }
        }
        return s;
    }
};