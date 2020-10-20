#include <iostream>
#include<algorithm>
#include<vector>
# define lld long long int
using namespace std;

int main() {
	lld n;
	cin>>n;
  vector<lld> v;
  for(lld i=0;i<n;i++)
  {
      lld t;
      cin>>t;
      v.push_back(t);
  }
  sort(v.begin(),v.end());
  lld max=0;
  for(lld i=0;i<n;i++)
  {
      lld y=v[i]*(n-i);
      max=y>max?y:max;
  }
  cout<<max<<endl;
}
