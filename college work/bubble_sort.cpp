#include<iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j] > a[j+1]) 
            a[j]=a[j]+a[j+1];
            a[j+1]=a[j]-a[j+1];
            a[j]=a[j]-a[j+1];

        }
    }
}
int main()
{
    int n,i;
    int a[n];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    cout<<"Sorted array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }

}