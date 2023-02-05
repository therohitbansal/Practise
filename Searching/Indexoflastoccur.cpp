#include<iostream>
using namespace std;
int indexoffirstoccur(int *arr, int target, int l, int h)
{
    
    while (l <= h)
    {int mid = (l + (h - 1)) / 2;
        if (arr[mid] < target)
            l = mid + 1;
        else if (arr[mid] > target)
            h = mid - 1;
        else
        {
            if (mid ==h-1 || arr[mid + 1] != arr[mid])
                return mid;
            else
                l = mid + 1;
        }
    }
    return -1;
}
int recindexofbinarysearch(int *arr,int target,int l,int h){
    
    if(l>h)
    return -1;
    int mid=(l+h)/2;
    if(arr[mid]<target)
    return recindexofbinarysearch(arr,target,mid+1,h);
    else if(arr[mid]>target)
    return recindexofbinarysearch(arr,target,0,mid-1);
    else
    {   
    if(arr[mid]!=arr[mid+1] || mid==h-1)
     return mid;
    else
    return recindexofbinarysearch(arr,target,mid+1,h);
    }
    } 
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
int arr[]={3,4,5,5,15,20,20};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<recindexofbinarysearch(arr,15,0,size);
}