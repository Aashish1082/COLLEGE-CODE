#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,m;
    int a[100];
    int b[100];
    int c[100];
    cout<<"Entre the size of array"<<endl;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cout<<"Entre the elements of array"<<endl;
        cin>>a[i];
    }
        j=m-1;
        i=0;
        while(i<j)
        {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
        }
        cout<<"Reversed array is:"<<endl;
        for(i=0;i<m;i++)
        {
            cout<<a[i];
        }
    
}