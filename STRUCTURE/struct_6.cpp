#include<bits/stdc++.h>
using namespace std;
struct time
{
    int hour;
    int minute;
    int seconds;
}h1,h2;
int main()
{
    int sum_second=0;
    int sum_minute=0;
    cout<<"Enter hour minute and second"<<endl;
    cin>>h1.hour>>h1.minute>>h1.seconds;
    cout<<"Enter hour minute and second"<<endl;
    cin>>h2.hour>>h2.minute>>h2.seconds;
    sum_second=h1.seconds + h2.seconds;
    int rem1=sum_second%60;
    int div=sum_second/60;
    sum_minute=h1.minute+h2.minute+div;
    int rem2=sum_minute%60;
    div=sum_minute/60;
    cout<<(h1.hour+h2.hour)+div<<rem2<<rem1;

}