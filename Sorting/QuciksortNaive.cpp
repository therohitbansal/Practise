#include <bits/stdc++.h>
using namespace std;
void naivePartition(vector<int>&v,int l)
{
int pivot=v[l];
vector<int>temp;
int count=0;
for(int i=0;i<v.size();i++)
{
    if(v[i]<pivot)
    count++;
}

}
int main() {
    vector<int>v={3,2,1,5,6,4};
    naivePartition(v,5);
    return 0;
}