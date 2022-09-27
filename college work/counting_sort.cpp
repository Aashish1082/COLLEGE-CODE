#include<iostream>
using namespace std;
int counting_sort(int a[],int n,int k)
{
    int c[k+1]={0};
    int b[50];
    int i,j;
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(i=1;i<=k;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(j=n-1;j>=0;j--)
    {
        b[c[a[j]]-1]= a[j];
        c[a[j]] = c[a[j]]-1;
    }
    for(i=0;i<n;i++)
    cout<<a[i];
  
}
int main()
{
    int n,k,a[n],i;
    cin>>n>>k;
     cout<<"Enter the elements of array"<<endl;
     for(i=0;i<n;i++)
     cin>>a[i];
}