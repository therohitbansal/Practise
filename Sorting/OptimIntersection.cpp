#include <bits/stdc++.h>
using namespace std;
void intersection(int *arr1,int n1,int *arr2,int n2)
{
   // int arr[n1+n2];
    int i=0,j=0;
while (i<n1 && j<n2)
{
    if(j>0 && arr1[j]==arr1[j-1])
    {
    j++;
    continue;
    }
    if(arr1[i]<arr2[j])
    i++;
    if(arr1[i]>arr2[j])
    j++;
    if(arr1[i]==arr2[j])
    {  cout<<arr1[i]<<" ";
        i++;
        j++;
    }
}

}
int main() {
    int arr2[]={5,10,15,15,20};
    int n1=sizeof(arr2)/sizeof(arr2[0]);
    int arr1[]={15,20,20,30};
    int n2=sizeof(arr1)/sizeof(arr1[0]);
    intersection(arr1,n1,arr2,n2);
    return 0;
}