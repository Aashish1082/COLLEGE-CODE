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
    int count=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==j)
                {
                    count+=a[i][j];
                }
            }
        }   cout<<count;
        
}