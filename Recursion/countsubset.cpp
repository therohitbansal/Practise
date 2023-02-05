#include<iostream>
using namespace std;
int countsub(int arr[],int n,int sum)
{
if(n==0)
return (sum==0)?1:0;
return countsub(arr,n-1,sum)+countsub(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int arr[]={10,20,15};
    cout<<countsub(arr,3,25);
}