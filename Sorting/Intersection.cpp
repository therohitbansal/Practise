#include <bits/stdc++.h>
using namespace std;
void intersection(int *arr1,int n1,int *arr2,int n2)
{
    int arr[n1+n2];
    int i=0,j=0;
for(int i=0;i<n1;i++)
{
    if(i>0 && arr1[i]==arr1[i-1])
    continue;
    for(int j=0;j<n2;j++)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            break;
        }
    }
}
}
int main() {
    int arr1[]={3,5,10,10,10,15,15,20};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={5,10,10,15,30};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,n1,arr2,n2);
    return 0;
}