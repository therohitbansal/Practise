#include <bits/stdc++.h>
using namespace std;
void lumotopartition(vector<int>&v,int pos)
{
int i=-1,j;
if(pos!=v.size()-1)
swap(v[pos],v[v.size()-1]);

int pivot=v.back();
for(j=0;j<v.size()-1;j++)
{
    if(v[j]<pivot)
    {
      i++;
      swap(v[i],v[j]);
    }
   
}
 swap(v[i+1],v[j]);
 for(int x:v)
 {
    cout<<x;
 }
 
    cout<<endl<<i+1; 
}
int main() {
    vector<int>v={10,80,30,90,40,50,70};
    int pos;
    cin>>pos;
    lumotopartition(v,pos);
    return 0;
}