#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i;
    cin>>n1>>n2;
    for(i=max(n2,n1);i<=n1*n2;i++)
    {
        if(i%n2==0 && i%n1==0)
         break;
    }
    cout<<i;
}