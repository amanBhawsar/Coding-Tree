#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}node;
node *d[11];
void init();
void init()
{
    int i;
	for( i=1;i<=11;i++)
	{
	    d[i]=NULL;
	}
}
long long maxi(int);
long long maxi(int i)
{
    node *temp;
    long long max=0;
    if(d[i]==NULL)
    return 0;
    else
    {
        temp=d[i];
        max=temp->data;
        while(temp!=NULL)
        {
        if(temp->data>max)
        {
        max=temp->data;}
        temp=temp->next;
        }
    
    return max;}
}
int main() {
	long long t,n,i;
	node *temp,*nn;

	cin>>t;
	while(t--)
	{
	    init();
	    long long tom=0,res=0;
	    cin>>n;
	   while(n--)
	   {
	       long long p,s;
	       long long hb;
	       cin>>p>>s;
	    hb=p%11;
	    nn=(node *)malloc(sizeof(node));
	    nn->data=s;
	    nn->next=NULL;
	    if(d[hb]==NULL)
	    d[hb]=nn;
	    else
	    {
	        temp=d[hb];
	        while(temp->next!=NULL)
	        {
	            temp=temp->next;
	        }
	        temp->next=nn;
	    }
	   }
	        for(i=1;i<=8;i++)
	        {
	            res=maxi(i);
	            tom+=res;
	        }
	        
	cout<<tom<<endl;
	
	}
}
	    