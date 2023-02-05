#include <bits/stdc++.h>
using namespace std;
void intersection(int *arr1,int n1,int *arr2,int n2)
{
    int i=0,j=0;
while(i<n1 && j<n2)
{
    if(i>0 && arr1[i]==arr1[i-1])
 {   i++;
    continue;
}
   if(arr1[i]<arr2[j])
   i++;
   else if(arr1[i]>arr2[j])
   j++;
   else{   cout<<arr1[i]<<" ";
    i++;
    j++;
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