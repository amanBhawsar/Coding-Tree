#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        map<string, int> mymap;
        string name[n+1],sur[n+1];
        for(int i=0;i<n;i++){
            cin >> name[i] >> sur[i];
            mymap[name[i]]++;
        }
       // uniq.erase(unique(uniq.begin(),uniq.end()),uniq.end());

        for(int i=0;i<n;i++)
        {
            if(mymap.at(name[i])==1){
                cout << name[i] << endl;
            }
            else{
                cout << name[i] << " ";
                cout << sur[i] << endl;
            }
        }
    }
}
