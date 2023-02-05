#include <bits/stdc++.h>
using namespace std;
void Maxheapify(vector<int>&v,int n,int i)
{
int largest=i,left=2*i+1,right=2*i+2;
if(left<n && v[left]>v[largest])
largest=left;
if(right<n && v[right]>v[largest])
largest=right;
if(largest!=i)
{
    swap(v[largest],v[i]);
    Maxheapify(v,n,largest);
}
}
void buildHeap(vector<int>&v){
    for(int i=(v.size()-2)/2;i>=0;i--)
    {
        Maxheapify(v,v.size(),i);
    }
}
void heapsort(vector<int>&v)
{
buildHeap(v);
for(int i=v.size()-1;i>=1;i--)
{
    swap(v[0],v[i]);
    Maxheapify(v,i,0);
}
}
int main() {
    vector<int>v={10,15,50,4,20};
    //heapsort(v);
    buildHeap(v);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}