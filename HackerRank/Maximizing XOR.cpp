int maximizingXor(int l, int r) {
    int maxi = 0;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
            maxi = max(maxi,i^j);
        }
    }
    return maxi;
}