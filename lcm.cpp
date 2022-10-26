#include<bits/stdc++.h>
using namespace std;
int lcmnaive(int a,int b)
{
 int res=max(a,b);
 while(true)
 {
     if(res%a==0&&res%b==0)
     { return res;}
     else
     {res++;}
 }
}
int gcd(int a,int b)
{
  int res=min(a,b);
  if(b==0)
  {return a;}
  else
  {return gcd(b,a%b);}
}
int lcm2(int a, int b)
{
  return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"LCM: "<<lcmnaive(a,b);
    cout<<"\nLCM: "<<lcm2(a,b);
    return 0;
}
