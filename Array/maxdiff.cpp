#include<iostream>

using namespace std;
int diffmax(int arr[],int n)
{
int res=arr[1]-arr[0];
int minval=arr[0];
for(int i=1;i<n;i++)
{
res=max(res,arr[i]-minval);
minval=min(minval,arr[i]);
}
return res;
}
int main()
{
int arr[]={2,5,8,10,5,3};
int n=6;
cout<<diffmax(arr,n);
}