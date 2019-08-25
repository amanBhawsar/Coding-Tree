int findMedian(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int k=arr.size();
    k=k/2;
    return arr.at(k);

}
