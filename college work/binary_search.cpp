#include<iostream>
using namespace std;
int binary_search(int a[],int x,int l, int h)
{
    if(l<=h)
    {
        int mid=(l+h)/2;
        if(x<a[mid])
        
            return binary_search(a,x,l,mid-1);
            else if(x>a[mid])
            return binary_search(a,x,mid+1,h);
            else if(x==a[mid])
            {
                int mid;
            }
        
    }
    
}
int main()
{
    int a[10]={10,20,50,55,65,70,75,80,90,100};
    int n,i,h,l,x;
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    binary_search(a,x,0,9);
    
}