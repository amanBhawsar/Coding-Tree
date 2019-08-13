#include <bits/stdc++.h>

using namespace std;

int ans(vector<vector<int>> arr){
    int i,j,max,sum;
    max=arr[0][0]+arr[0][1]+arr[0][2]+arr[1][1]+arr[2][0]+arr[2][1]+arr[2][2];
    for(i=0;i<arr[i].size()-2;i++){
        for(j=0;j<arr.size()-2;j++){
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(max<sum)
                max=sum;
        }
    }
    return max;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << ans(arr) << endl;
    return 0;
}
