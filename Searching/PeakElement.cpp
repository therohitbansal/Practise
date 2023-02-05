#include <bits/stdc++.h>
using namespace std;
int peakElement(vector<int>v,int n)
{
int l=0,h=v.size()-1;
while(l<=h)
{
    int mid=(l+h)/2;
    if(((mid==0)||v[mid-1]<=v[mid])&&(mid==n-1||v[mid+1]<=v[mid]))
    return mid;
    if(mid>0 && v[mid-1]>=v[mid])
      h=mid-1;
    else
       l=mid+1;
}
return -1;
}
int main() {
    vector<int>v={1,2,1,3,5,6,4};
   // cout<<v.size();
    cout<<peakElement(v,v.size());
    
        return 0;
}