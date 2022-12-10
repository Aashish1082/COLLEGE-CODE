#include<bits/stdc++.h>
using namespace std;
struct height
{
    int feet;
    int inches;
}h1,h2;
int main()
{
    int sum=0;
    int sum_inches=0;
    cout<<"Enter feet";
    cin>>h1.feet;
    cout<<"Enter inches";
    cin>>h1.inches;
    cout<<"Enter feet and inches";
    cin>>h2.feet>>h2.inches;
    sum_inches=h1.inches + h2.inches;
    int rem=sum_inches%12;
    int div=sum_inches/12;
    cout<<(h1.feet + h2.feet)+div<<" "<<sum_inches;
}