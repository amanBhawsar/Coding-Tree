#include <iostream>
#include<vector>
using namespace std;
void countFreq(int [],int);
int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
        cin>>a[i];
  countFreq(a,n);      
    }
	return 0;
}
void countFreq(int arr[],int n) 
{ int max=0;
    vector<bool> visited(n, false); 
    for (int i = 0; i < n; i++) { 
        if (visited[i] == true) 
            continue; 
        int count = 1; 
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] == arr[j]) { 
                visited[j] = true; 
                count++; 
            } 
        }
    if(count>max)
    max=count;
        
    }
    cout<<(n-max)<<endl;
} 
  

