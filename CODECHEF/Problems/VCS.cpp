#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        int N,I,T;
        cin >> N >> I >> T;
        int files[N + 1] = {0};
        while(I--){
            int num;
            cin >> num;
            files[num]++;
        }
        while(T--){
            int num;
            cin >> num;
            files[num]++;
        }
        int ignored_tracked = 0,unignored_untracked = 0;
        for(int i = 1;i <= N;i++){
            if(files[i] == 2)
                ignored_tracked++;
            if(files[i] == 0)
                unignored_untracked++;
        }
        cout << ignored_tracked << ' ' << unignored_untracked << endl;
	}
	return 0;
}
