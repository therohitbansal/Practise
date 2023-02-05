#include<iostream>
using namespace std;
int main()
{ int res=0;
int n;
cin>>n;
  for(int i=5;i<=n;i*=5)
  {
    res=res+n/i;
  }
  cout<<res;
}