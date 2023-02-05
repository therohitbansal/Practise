#include<bits/stdc++.h>
using namespace std;
int maxcutrope(int n,int a,int b,int c)
{
    int res=0;
if(n==0) 
return 0;
if(n<0)
return -1;
res=max(maxcutrope(n-a,a,b,c),maxcutrope(n-b,a,b,c),maxcutrope(n-c,a,b,c));
if(res==-1)
return -1;
return res+1;
}
int main()
{
cout<<maxcutrope(9,2,2,2);
}