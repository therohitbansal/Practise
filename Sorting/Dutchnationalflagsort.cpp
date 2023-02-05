#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>&v)
{
int i=0,mid=0,j=v.size()-1;
while(mid<=j)
{
    if(v[mid]==0)
    {
        i++;
        mid++;
    }
    else if(v[mid]==1)
    {
        mid++;
    }
    else{
    swap(v[mid],v[j]);
    j--;
    }
}
}
int main() {
    vector<int>v={0,1,2,1,1,2};
    sort(v);
    for(int i:v)
    cout<<i<<" ";
    return 0;
}