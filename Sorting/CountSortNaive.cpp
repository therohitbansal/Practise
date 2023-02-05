#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int>&v,int k){
vector<int>temp(k,0);
for(int i=0;i<v.size();i++)
temp[v[i]]++;
int index=0;
for(int i=0;i<k;i++){
for(int j=0;j<temp[i];j++)
{
v[index]=i;
index++;
}
}
}
int main() {
    vector<int>v={1,4,4,1,0,1};
    countSort(v,5);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}