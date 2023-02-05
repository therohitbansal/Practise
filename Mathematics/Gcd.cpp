#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int res=1;
    for(int i=min(n1,n2);i>0;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            res=i;
            break;
        }
    }
    cout<<res;
}