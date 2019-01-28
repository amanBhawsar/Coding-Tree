#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x;
    vector<int>v;
    cin >> n;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << ' ';
    return 0;
}
