#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
if(n2==0)
return n1;
else
return gcd(n2,n1%n2);
}
int lcm(int n1,int n2)
{
    return (n1*n2)/gcd(n1,n2);
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<lcm(n1,n2);
}