#include <bits/stdc++.h>
using namespace std;
int searchrotated(vector<int>&v,int x)
{
int i=0,j=v.size()-1;
while(i<=j)
{
    int mid=(i+j)/2;
    if(v[mid]==x)
    return mid;

if(v[mid]>v[i])
{
    if(x>=v[i] && x<v[mid])
     j=mid-1;
    else
     i=mid+1;
}
else
{
    if(x>v[mid]&&x<=v[j])
    i=mid+1;
    else
    j=mid-1;
}
}
return -1;
}
int main() {
    vector<int>v={10,20,40,60,5,8};
    cout<<searchrotated(v,5);
    return 0;
}