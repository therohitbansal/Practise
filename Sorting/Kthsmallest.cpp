#include <bits/stdc++.h>
using namespace std;
int lumotopartition(vector<int>&v,int l,int h)
{
int i=l-1,j=l;
int pivot=v[h];
for(;j<h;j++)
{
    if(v[j]<pivot)
    {
      i++;
      swap(v[i],v[j]);
    }
}
swap(v[i+1],v[j]);
return i+1;

}
int kthsmallest(vector<int> &v,int l,int h,int k)
{
while(l<=h)
{
    int p=lumotopartition(v,l,h);
    if(p==k-1)
     return p;
    else if(p>k-1)
    h=p-1;
    else
    l=p+1;
}
return -1;
}
int main() {
    vector<int>v={10,4,5,8,11,6,26};
    cout<<kthsmallest(v,0,v.size()-1,7);
    return 0;
}