#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    int a[50][50];
    cout<<"Enter the size of 1st array"<<endl;
    cin>>m;
    cout<<"Enter the size of 2nd array"<<endl;
    cin>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl; 

    }
}