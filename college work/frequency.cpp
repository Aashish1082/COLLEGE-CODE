#include<iostream>
using namespace std;
int main()
{
/* NON REPEATED{
    int a[]={1,2,3,4,5,3,2};
    int i,n;
    int dat[6]={0};
        for(i=0;i<6;i++)
        {
            dat[a[i]]++;
        }
        for(i=0;i<5;i++)
        {
        
            if(dat[i]==1)
            {
                cout<<i;
            }
        }
        return 0;
    
}
*/
/* REPEATED NUMBERS
int a[]={1,2,3,4,5,3,2};
    int i,n;
    int dat[6]={0};
        for(i=0;i<6;i++)
        {
            dat[a[i]]++;
        }
        for(i=0;i<5;i++)
        {
        
            if(dat[i]>1)
            {
                cout<<i;
            }
        }
        return 0;
}
*/
/*
int a[]={1,2,3,4,5,3,2};
    int max=a[0];
    int dat[6]={0};
    int i;
        for(i=1;i<6;i++)
        {
            if(a[i]>max)
            max=a[i];
        }
        for(i=0;i<6;i++)
        {
        
           dat[a[i]]++;
        }
        for(i=1;i<=max;i++)
        {
            if(dat[i]>1)
            cout<<i;
        }
        return 0;
}
*/
char a[]={'a','a','s','h','i','s','h','g','u','p','t','a'};
int i,n;
int dat[26]={0};
while(a[i]!='\0')
{
    dat[a[i]-'a']++;
    i++;

for(i=0;i<25;i++)
{
    if(dat[i]>0)
    {
        cout<<char(i+'a');
        cout<<dat[i];
    }
}
}
}

    
    