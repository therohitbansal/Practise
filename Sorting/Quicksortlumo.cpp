#include <bits/stdc++.h>
using namespace std;
int Lumotopartition(vector<int>&v,int l,int h)
{
int i=l-1,j;
int pivot=v[h];
for(j=l;j<h;j++)
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
void Quicksort(vector<int>&v,int l,int h)
{
    if(l<h){
 int p=Lumotopartition(v,l,h);
    cout<<p;
   Quicksort(v,l,p-1);
   Quicksort(v,p+1,h);
    }
}
int main() {
    vector<int>v={3,2,1,5,6,4,4};
    Quicksort(v,0,v.size()-1);
    
    // for(int x:v)
    // cout<<x<<" ";
    return 0;
}