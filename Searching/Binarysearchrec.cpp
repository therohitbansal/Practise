#include<iostream>
using namespace std;
int recbsearch(int *arr,int target,int l,int h)
{int mid=(l+(h-1))/2;
if(l>h)
return -1;
if(arr[mid]==target)
return mid;
if(arr[mid]<target)
return recbsearch(arr,target,mid+1,h);
return recbsearch(arr,target,l,mid-1);
}
int main()
{
int arr[]={2,4,5,6,7};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<recbsearch(arr,6,0,size);
}