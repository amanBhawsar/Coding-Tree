// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> v) {
    sort(v.begin(),v.end());
    int x,t,c=0;
    t=v.size();
    x=v.at(t-1);
    for(int i=v.size()-1;i>=0;i--){
        if(x==v.at(i))
            c++;
    }
    return c;
}
