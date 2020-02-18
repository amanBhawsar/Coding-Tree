int equalizeArray(vector<int> arr) {
    int count[101]={0};
    int maxi = 0;
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=100;i++){
        maxi = max(maxi,count[i]);
    }
    return arr.size()-maxi;
}