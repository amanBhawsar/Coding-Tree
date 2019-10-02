#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int match[10] = {6,2,5,5,4,5,6,3,7,6};
    char arr[101];
    while(t--){
        int c=0,i=0;
        cin >> arr;
        while(arr[i]!='\0'){
            c+=match[arr[i]-'0'];
            i++;
        }
        if(c%2==0){
            while(c){
                cout << "1";
                c=c-2;
            }
        }
        else{
            c=c-3;
            cout << "7";
            while(c){
                cout << "1";
                c=c-2;
            }
        }
        cout << endl;
        
    }


}