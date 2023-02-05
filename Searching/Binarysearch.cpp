#include<iostream>
using namespace std;
int Binarysearch(int *arr,int size,int target){
int l=0;int h=size-1;
while(l<=h)
{
int mid=(l+h)/2;
if(arr[mid]==target)
return mid;
else if(arr[mid]>target)
h=mid-1;
else
l=mid+1;
}
return -1;
}
int main()
{
int arr[]={1,2,3,4,5,8};
int size=sizeof(arr)/sizeof(arr[0]);
//cout<<size;
cout<<Binarysearch(arr,size,4);
}

