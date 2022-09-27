#include<iostream>
using namespace std;
int ternary_search(int a[],int x,int h, int l)
{
    if(l>=h)
    {
    int mid1= l+(h-l)/3;
    int mid2= h-(h-l)/3;
    if(x==a[mid1])
    return mid1;
    else if(x==a[mid2])
    return mid2;
    else if(x<a[mid1])
    return ternary_search(a,x,mid1-1,l);
    else if(x>a[mid2])
    return ternary_search(a,x,h,mid2+1);
    else if(x<mid2 && x>mid1)
    return ternary_search(a,x,mid1-1,mid2+1);
    
    
    
    }
    return -1;
}
int main()
{
    int n,h,l,x,i;
    int a[n];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    int result= ternary_search(a,x,n-1,0);
    if(result==-1)
    cout<<"NO IS NOT FOUND"<<endl;
    else
    cout<<"NO is found at index"<<i;
}