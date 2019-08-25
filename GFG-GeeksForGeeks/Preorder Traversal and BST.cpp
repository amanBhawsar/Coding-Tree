#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        int c=0,x;
        cin >> n;
        int arr[n];
        stack<int> stack;
        for(int i=0;i<n;i++){
            cin >> x;
            arr[i]=x;
        }
            int root = -1000;

            for (int i = 0; i < n; i++) {
                if (arr[i] < root) {
                    c=1;
                    cout << 0 <<endl;
                    break;
                }

                while (!stack.empty() && (int) stack.top() < arr[i]) {
                    root = stack.top();
                    stack.pop();
                }
                stack.push(arr[i]);
            }
            if(c==0){
                cout << 1 << endl;
            }else{
                c=0;
            }
        }

	return 0;
}
