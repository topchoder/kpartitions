#include <bits/stdc++.h>
using namespace std;

void print(string t)
{
    cout<<t<<"\n";
}

void kpartition(int *a,int n,int k,string t="",int pos=0,int l=0)
{
    if(pos==n&&l==k)
    {
	print(t);
	return;
    }
    for(int i=pos;i<n;i++)
    {
    	string p;
    	for(int k=pos;k<=i;k++)
    	{
    	     p+=to_string(a[k]);
    	     p+=" ";
    	}
    	kpartition(a,n,k,t+"("+p+")",i+1,l+1);
    }
}


signed main()
{
   int *a,n;
   int *b; 
   cout<<"n?"<<"\n";
   cin>>n;
   a=new int[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<"\n";
   int k;
   cout<<"enter number of partitions to divide\n";
   cin>>k;
   if(k>n)
   {
       printf("not possible to partition\n");
       return -1;
   }
   kpartition(a,n,k);
   return 0;
} 
