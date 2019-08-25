#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n,z,minAttack=0,temp;
        cin >> n >> z;
        vector<int> v1;
        for(int i=0;i<n;i++){
            cin >> temp;
            v1.push_back(temp);
        }
        make_heap(v1.begin(), v1.end());
        while(v1.size()!=0){
            if(z<=0){
                break;
            }else{
                int f = v1.front();
                pop_heap(v1.begin(), v1.end());
                v1.pop_back();
                // cout <<v1.size() << " ";
                if(f!=0){
                    z=z-f;
                    minAttack++;
                    f=f/2;
                    if(f!=0){
                        v1.push_back(f); 
                        push_heap(v1.begin(), v1.end()); 
                    }
                }
            }
        }
        
        if(z<=0){
            cout << minAttack << endl;
        }else{
            cout << "Evacuate" << endl;
        }
    }
    return 0;
}
