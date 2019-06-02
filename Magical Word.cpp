#include <iostream>
#include<string>
using namespace std;

char Magic(char c){
    int a[]={67,71,73,79,83,89,97,101, 103, 107, 109, 113};
    int min=65;
    char ans;
    for(int i=0;i<12;i++){
        if(abs(a[i]-c)<min){
            min = abs(a[i]-c);
            ans = a[i];
        }
    }
    return (char)ans;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        for(int i=0;i<n;i++){
            cout << Magic(a[i]);
        }
        cout << endl;
    }
    return 0;
}