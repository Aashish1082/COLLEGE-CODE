#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==1)
    return 0;
    else if (n==2)
    return 1;
    else 
    return fib(n-1)+fib(n-2);
}
int power(int n,int m)
{
    int num=1,i;
    for(i=1;i<=n;i++)
    num=m*num;
    return num;
}
int DAT[101];
int fibo(int n)
{
    if(n==1 || n==2)
    return DAT[n]=n-1;
    else
    {
        if (DAT[n]==0)
        DAT[n]=(fibo(n-1)+fibo(n-2));
    }
    return DAT[n];
}
int gcd(int a, int b)
{
    if(b!=0){
    return gcd(b,a%b);
    }
    else
    return a;
}
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
                return mid;
            }
        
    }
    
}
void TOH(int n,char A,char B,char C)
{
    if(n==1)
{
    cout<<"Move disc"<<" "<<n<<" "<<"from rod"<<" "<<A<<" "<<"to rod"<<" "<<C<<endl;
    return;
}

TOH(n-1,A,C,B);
cout<<"Move disc"<<" " <<n<<" "<<"from rod"<<" "<<A<<" "<<"to rod"<<" "<<B<<endl;

TOH(n-1,B,A,C);

}
int reverse(int n)
{
  int rev=0;
   while(n>0){

     int rem=n%10;
     rev = rev*10 + rem;
     n /= 10;
   }

   cout<<rev;
}
int sum_of_digit(int n, int val)
{
    if (n < 10) {
        val = val + n;
        return val;
    }
    return sum_of_digit(n / 10, (n % 10) + val);
}
int palindrome_check(string s, int start, int end)
{
    if(end-start==1 || start==end)
    {
        return 1;
    }
    else
    {
        if(s[start]==s[end])
        {
            return palindrome_check(s,start+1,end-1); 
        }
        else
        {
            return 0;
        }
    }
}


int main()
{
    int n,m;
    for(int i=1;i<=10;i++)
    cout<<" " <<fib(i);
    cout<<endl;
    cout<<endl;
    cout<<"Enter the number"<<endl;
    cin>>m;
    cout<<"Enter the power"<<endl;
    cin>>n;
    cout<<" "<<power(n,m);
    cout<<endl;
    cout<<endl;

    for(int i=1;i<=10;i++)
        cout<<" "<<fibo(i)<<endl;
        cout<<endl;
        cout<<endl;
        int a,b;
        cout<<"ENTER TWO DIGITS";
        cin>>a>>b;
        if(a>b){
            cout<<gcd(a,b);
        }
        else{
            cout<<gcd(b,a);
        }
        cout<<endl;
        cout<<endl;

    int c[10]={10,20,50,55,65,70,75,80,90,100};
    int i,h,l,x;
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    binary_search(c,x,0,9);
    cout<<endl;
      n=3;
    TOH(n,'A','B','C');
    cout<<endl;

    cout<<"Enter the number"<<endl;
   cin>>n;
   reverse(n); 
   cout<<endl;

    int num = 12345;
    int result = sum_of_digit(num, 0);
    cout << "Sum of digits is " << result;
    cout<<endl;
    string s;
   cin>>s;
    n=s.length();
   if(palindrome_check(s, 0, n-1))
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   return 0;
}
