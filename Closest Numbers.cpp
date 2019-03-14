// Complete the closestNumbers function below.
vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(),arr.end());
    vector<int> v;
    int min =INT_MAX,d;
    for(int i=0;i<arr.size()-1;i++){
        d=arr.at(i+1)-arr.at(i);
        if(d<min){
            min=d;
        }
    }
    for(int i=0;i<arr.size()-1;i++){
        d=arr.at(i+1)-arr.at(i);
        if(d==min){
            v.push_back(arr.at(i));
            v.push_back(arr.at(i+1));
        }
    }
    return v;
}
