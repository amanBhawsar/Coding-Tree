long sumXor(long n) {
    int one=0;
    while(n!=0){
        one += (n+1)%2;
        n/=2;
    }
    n=1;
    while(one--){
        n*=2;
    }
    return n;
}