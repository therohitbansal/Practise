#include <bits/stdc++.h>
using namespace std;
vector<int> mergesort(vector<int>&v1,vector<int>&v2)
{
    vector<int>v;
    int i=0,j=0;
    while(i<v1.size() && j<v2.size())
    {
      if(v1[i]<=v2[j])
      v.push_back(v1[i++]);
      else
      v.push_back(v2[j++]);
    }
    while(i<v1.size())
    v.push_back(v1[i++]);
    
    while(j<v2.size())
    v.push_back(v2[j++]);
    
    return v;
}
int main() {
    vector<int>v1={5,6,7,8,8};
    vector<int>v2={1,2,3};
    vector<int>v=mergesort(v1,v2);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}