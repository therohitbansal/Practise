#include <bits/stdc++.h>
using namespace std;
void maxHeapify(vector<int>&v,int n,int i){
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n && v[left]>v[largest])
    largest=left;
    if(right<n && v[right]>v[largest])
    largest=right;
    if(largest!=i)
    {
        swap(v[largest],v[i]);
        maxHeapify(v,n,largest);
    }
}
void buildHeap(vector<int>&v)
{
    for(int i=(v.size()-2)/2;i>=0;i--)
    maxHeapify(v,v.size(),i);
}
void heapSort(vector<int>&v)
{
    buildHeap(v);
for(int i=v.size()-1;i>=1;i--)
{
    swap(v[0],v[i]);
    maxHeapify(v,i,0);
}
}
int main() {
    vector<int>v={4,3,2,9,1,7};
    buildHeap(v);
    heapSort(v);   
    for(int x:v)
    cout<<x;
    return 0;
}