#include <bits/stdc++.h>
using namespace std;
void Merge(int *a,int l,int m,int h)
{
int temp[1000];
int k=m+1,i=l,p=0;
while(i<=m && k<=h)
{
if(a[i]<a[k])
temp[p++]=a[i++];
else
temp[p++]=a[k++];
}
while(i<=m)
{
    temp[p++]=a[i++];
}
while(k<=h)
{
    temp[p++]=a[k++];
}
int v=l;
for(int p=0;p<h-l+1;p++)
{
    a[v++]=temp[p];
}

}
void mergesort(int *a,int l,int h)
{
if(l<h)
{
int m=(l+h)/2;
mergesort(a,l,m);
mergesort(a,m+1,h);
Merge(a,l,m,h);
}
}
int main() {
    int a[]={5,4,7,6};
    mergesort(a,0,3);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}