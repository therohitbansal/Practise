#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>&v){
int mid=v.size()/2;
int i=0,j=mid+1;
vector<int>vt;
while(i<=mid && j<v.size())
{
    if(v[i]<=v[j])
    vt.push_back(v[i++]);
    else
    vt.push_back(v[j++]);
}
while(i<=mid)
vt.push_back(v[i++]);
while(j<v.size())
vt.push_back(v[j++]);
return vt;
}
int main() {
    vector<int>v={10,20,40,20,30};
   vector<int> vt=merge(v);
    for(int x:vt)
    cout<<x;
    return 0;
}