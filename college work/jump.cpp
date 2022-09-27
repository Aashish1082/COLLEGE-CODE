#include<iostream>
#include<math.h>
using namespace std;
int jump_search(int a[],int n,int key)
{
    int step=sqrt(n);
    int index=0,i,j;
    for(i=0;i<n;i+=step)
    {
        if(a[i]==key)
        {
            return i;
        }
        while(a[i]>key)
        {
            index=i-step+1;
            for(j=index;j<n;j++)
            {
                if(a[j]==key)
                return j;
            }
        }
    }
    return -1;
}
int main()
{
    int a[10];
    int n,key,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the no of elements in array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    int index = jump_search(a,n,key);
    if(index>0)
    {
        cout<< "Element is present" <<" "<<  index  <<endl;
    }
    else
    cout<<"Element is not present";
}