class Solution {
public:
    int kthFactor(int n, int k) {
        int z=sqrt(n);
        vector<long long int> vec;
        for (int i=1;i<=z;i++){
            if (n%i==0){
                vec.push_back(i);
                if(i*i!=n)
                    vec.push_back(n/i);
            }
        }
        sort(vec.begin(),vec.end());
        if(vec.size()>=k){
            return vec[k-1];
        }
        return -1;
    }
};