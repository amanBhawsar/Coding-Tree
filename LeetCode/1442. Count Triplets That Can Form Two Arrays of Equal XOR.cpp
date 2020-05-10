class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int c=0,n=arr.size();
        int xo[400];
        xo[0]=arr[0];
        for(int i=1;i<n;i++){
            xo[i]=arr[i]^xo[i-1];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j;k<n;k++){
                    int xl=0,xr=0;
                    if(i==0){
                        xl=xo[j-1];
                    }else{
                        xl=xo[i-1]^xo[j-1];
                    }
                    
                    xr=xo[k]^xo[j-1];
                    if(xl==xr){
                        c++;
                    }                   
                }
            }
        }
        return c;
    }
};