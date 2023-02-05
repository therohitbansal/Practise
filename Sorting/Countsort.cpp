#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int>&v,int k){
vector<int>temp(k,0);
for(int i=0;i<v.size();i++)
temp[v[i]]++;
for(int i=1;i<k;i++)
{
    temp[i]=temp[i-1]+temp[i];
}
vector<int>output(v.size());
for(int i=v.size()-1;i>=0;i--)
{
    output[temp[v[i]]-1]=v[i];
    temp[v[i]]--;
}
v=output;
}
int main() {
    vector<int>v={1,4,4,1,0,1};
    countSort(v,5);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}