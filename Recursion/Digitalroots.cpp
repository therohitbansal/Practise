#include<iostream>
using namespace std;
int digitalroots(int n)
{
    if(n/10==0)
    return n;
    else
    return n%10+digitalroots(n/10);
}
int main()
{
cout<<digitalroots(876);
}