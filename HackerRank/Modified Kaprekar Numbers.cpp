int countDigit(unsigned long long n){
    return floor(log10(n) + 1); 
} 
void kaprekarNumbers(unsigned long long p, unsigned long long q) {
    unsigned long long pdt = 1;
    vector<unsigned long long> ans;
    for(unsigned long long i=p;i<=q;i++){
        pdt = i*i;
        unsigned long long dig = countDigit(pdt);
        // cout << dig << endl;
        unsigned long long p=1;
        for(unsigned long long k=0;k<((dig+1)/2);k++){
            p*=10;
        }
        unsigned long long a=pdt/p,b=pdt%p;
        // cout << a << " " << b << endl;
        if(a+b==i && b!=0){
            ans.push_back(i);
        }
    }

    if(ans.size()==0){
        cout << "INVALID RANGE" << endl;
    }else{
        for(unsigned long long i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
    }
}