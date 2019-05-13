#include <iostream>
using namespace std;

int main() {
    long long t,n,m;
    cin >> t;
    while(t--){
        cin >> m >> n;
        long long k=0;    //Odd ari wins otherwise Rich
        while(1){
            if(m==0 || n==0){
                break;
            }
            
            if(m>n){
                if((m/n)>=2){
                    k++;
                    break;
                }
                else{
                    m = m - (m/n)*n;
                    k++;
                }
            }
            else if(m<n){
                if((n/m)>=2){
                    k++;
                    break;
                }
                else{
                    n = n - (n/m)*m;
                    k++;
                }
            }
            else{   //m==n
                k++;
                break;
            }
        }
        if(k%2==0){
            cout << "Rich" << endl;
        }
        else{
            cout << "Ari" << endl;
        }
    }
    return 0;
}
