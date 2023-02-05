#include <bits/stdc++.h>
using namespace std;
int Hoarepart(vector<int>&v,int l,int h)
{
int i=l-1;
int j=h+1;
int pivot=v[l];
while(true)
{
    do{
        i++;
    }while(v[i]<pivot);
    do{
        j--;
    }while(v[j]>pivot);
    if(i>=j)
    return j;
    swap(v[i],v[j]);
}
}
void quickSort(vector<int>&v,int l,int h)
{
if(l<h){
int p=Hoarepart(v,l,h);
quickSort(v,l,p);
quickSort(v,p+1,h);
}
}
int main() {
    vector<int>v={8,4,7,9,3,10,5};
    quickSort(v,0,6);
    for(int x:v)
    cout<<x;
    return 0;
}
