#include <iostream>
#include<vector>
#include <algorithm>
#include<limits.h>
using namespace std;

int main() {
	int n,x,i,k,mini=INT_MAX,index,cost=0,max;
	cin >> n >> x;
    vector <int>arr;
    i=n;
    while(i--){
        cin >> k;
        arr.push_back(k);
    }

    int z=arr.size();
    while(z!=0){
        if(is_sorted(arr.begin(), arr.begin()+z)){
            break;
        }


        mini=INT_MAX;
        for(i=0;i<z;i++){
            if(mini>arr[i]){
                mini=arr[i];
                index=i;
            }
        }
        int cou=0;
        for(i=0;i<index;i++){//bigger than min must be <=x othervise dont go for this operation
            if(arr[i]>mini){
                cou++;
            }
        }
        if(cou>=x){
            cost+=x;
            z--;
            arr.erase(arr.begin()+index);
        }
        else{
            mini=0;
            for(i=0;i<z;i++){
                if(mini<arr[i]){
                    mini=arr[i];
                    index=i;
                }
            }
            cost+=z-1-index;
            z--;
            arr.erase(arr.begin()+index);
        }
    }
    cout << cost;
}
Language: C++
