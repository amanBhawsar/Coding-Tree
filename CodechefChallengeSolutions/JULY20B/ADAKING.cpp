#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       n-=1;
      char a[8][8];
  for(int i=0;i<8;i++)
  {
      for(int j=0;j<8;j++)
      {
          a[i][j]='.';
      }
  }
  a[0][0]='O';
   int o=(n+1)%8;
  int u=(n+1)/8;
  for(int i=u;i<u+1 ;i++)
  {
      if(o!=0)
      {for(int j=o; j<8;j++)
      {
          a[i][j]='X';
      }}
  }
  if((n+1)%8==0)
  {
      int d=(n+1)/8;
       for(int i=d;i<d+1;i++)
  {
      for(int j=0;j<8;j++)
      {
          a[i][j]='X';
      }
  }
  }
  else
  {
  int c=n+1;
    int r=ceil(c*1.0/8);
    int l=(n)%8;
    for(int i=r;i<r+1;i++)
  {
      for(int j=0;j<=l+1;j++)
      {
          if(a[i][j]!='X')
          a[i][j]='X';
      }
  }
  }
    for(int i=0;i<8;i++)
  {
      for(int j=0;j<8;j++)
      {
         cout<<a[i][j];
      }
      cout<<"\n";
  }
  cout<<"\n";
}
}