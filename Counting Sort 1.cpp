// Complete the countingSort function below.
vector<int> countingSort(vector<int> arr) {
    vector<int> v;
    int a[100]={0};
    for (auto x : arr)
        a[x]++;
    for(int i=0;i<100;i++){
        v.push_back(a[i]);
    }
    return v;
}
