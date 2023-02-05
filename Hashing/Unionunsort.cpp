#include<bits/stdc++.h>
using namespace std;
int union1(int arr1[],int arr2[],int n1,int n2)
{
    int temp[n1+n2];
    int k=0;
   for(int i=0;i<n1;i++){
    temp[k++]=arr1[i];
   }
   for(int i=0;i<n2;i++){
    temp[k++]=arr2[i];
   }
   int res=0;
   for(int i=0;i<n1+n2 ;i++){
    bool flag=false;
    for(int j=0;j<i;j++)
    {
        if(temp[i]==temp[j])
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    res++;
   }
   for(int i:temp)
   cout<<i<<" ";
return res;
}
int main()
{
    int arr1[]={5,7,4,6,7,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={3,1,8,6,5};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<union1(arr1,arr2,n1,n2); 
     return 0;
}