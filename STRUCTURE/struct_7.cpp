#include<bits/stdc++.h>
#include<string.h>
using namespace std;
struct marks
{
    int roll_no;
    string name;
    int phy_marks;
    int chem_marks;
    int maths_marks;
}m[5];
int main()
{

for(int i=0;i<5;i++)
{cout<<"Enter your name"<<endl;
cin>>m[i].name;
cout<<"Enter your roll number"<<endl;
cin>>m[i].roll_no;
cout<<"Enter your physics marks"<<endl;
cin>>m[i].phy_marks;
cout<<"Enter your chem marks"<<endl;
cin>>m[i].chem_marks;
cout<<"Enter your maths marks"<<endl;
cin>>m[i].maths_marks;
}
for(int i=0;i<5;i++)
{
    cout<<"pecentage of"<<" "<<m[i].name<<" "<<"is"<<endl;
    cout<<((m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/300)*100;
}
}