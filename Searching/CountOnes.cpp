#include <bits/stdc++.h>
using namespace std;
int count1s(vector<int>&v,int l,int h)
{
    while(l<=h){
      int mid=(l+h)/2;
      if(v[mid]==0)
      l=mid+1;
      else
      {
        if(mid==0||v[mid]!=v[mid-1])
          return (v.size()-mid);
        else
           h=mid-1;
      }
    }
    return 0;
}
int main() {
    vector<int>v={0,0,0,1,1,1};
    cout<<count1s(v,0,v.size());
    return 0;
}