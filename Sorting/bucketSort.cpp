#include <bits/stdc++.h>
using namespace std;
void bucketSort(vector<int>&v,int k)
{
    int max_ele=*max_element(v.begin(),v.end());
    max_ele++;
    vector<int>temp[k];
    for(int i=0;i<v.size();i++)
    {
        int bi=(k*v[i])/max_ele;
        temp[bi].push_back(v[i]);
    }
    for(int i=0;i<k;i++)
    {
        sort(temp[i].begin(),temp[i].end());
    }
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<temp[i].size();j++)
        {
            v[index++]=temp[i][j];
        }
    }
}
int main() {
    vector<int>v={30,40,10,80,5,12,70};
     bucketSort(v,4);
     for(int x:v)
     cout<<x<<" ";   
    return 0;
}