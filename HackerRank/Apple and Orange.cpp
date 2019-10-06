void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int c=0;
    vector <int>v;
    for(int i=0;i<apples.size();i++){
        if(a+apples[i]<=t && a+apples[i]>=s){
            c++;
        }
    }
    cout << c << endl;
    c=0;
    for(int i=0;i<oranges.size();i++){
        if(b+oranges[i]<=t && b+oranges[i]>=s){
            c++;
        }
    }
    cout << c << endl;
}