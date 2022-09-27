#include<iostream>
using namespace std;
int main()
{
    int a[50][50];
    int b[50][50];
    int i,j,m,n;
    cout<<"Enter the no of rows"<<endl;
    cin>>n;
    cout<<"Enter the no of columns"<<endl;
    cin>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    i=j=0;
    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
}