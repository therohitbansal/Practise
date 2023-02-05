#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int i,int m,int j)
{
   vector<int> vj;
    int k=m+1;
while(i<=m && k<=j)
{
if(v[i]<=v[k])
    vj.push_back(v[i++]);
else
    vj.push_back(v[k++]);
}
while(i<=m)
{
    vj.push_back(v[i++]);
}
while(k<=j)
{
    vj.push_back(v[k++]);
}
//v.clear();
v=vj;
}
void mergesort(vector<int> &v,int i,int j)
{
   if(i<j)
    {  
        int mid=(i+j)/2;
       mergesort(v,i,mid);
       mergesort(v,mid+1,j);
       merge(v,i,mid,j);
    }
}
int main() {
    vector<int>v={10,5,30,15,7};
    mergesort(v,0,v.size()-1);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}