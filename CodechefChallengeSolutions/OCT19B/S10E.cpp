#include <iostream>
using namespace std;

int main()
{
 int t,n,j,ct;
 cin>>t;
 while(t--)
 { 
   cin>>n;
    int a[n];
  for(j=0;j<n;j++)
   cin>>j[a];
  ct=1 ;
  int min = 0[a];
  for(j=1;j<5;j++)
    if(j[a]<min)
    {
        ct++;
        min=j[a];
    }
  for(j=0;j+5<n;j++)
  {
   if(a[j+5] <a[j]&&a[j+5]<a[j+1]&&a[j+5]<a[j+2]&&a[j+5]<a[j+3]&&a[j+5]<a[j+4])
    ct++;
  }
  cout<<ct<<endl;  
 }
 return 0;
} 
