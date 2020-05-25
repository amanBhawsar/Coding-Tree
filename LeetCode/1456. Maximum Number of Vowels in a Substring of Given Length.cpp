class Solution {
public:
    int maxVowels(string s, int k) {
        int v=0,maxi=0;
        char x;
        for(int i=0;i<k;i++){
            x=s[i];
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                v++;
        }
        maxi=v;
        int i=0,j=k,n=s.size();
        while(j<n){
            x=s[i];
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                v--;
            i++;
            
            x=s[j];
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                v++;
            j++;
            maxi=max(maxi,v);
        }
        return maxi;
    }
};