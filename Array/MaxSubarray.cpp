#include<iostream>
using namespace std;
int Maxsub(int arr[],int n)
{
 int curr=0;
 int total=-1;
 for(int i=0;i<n;i++)
 {
    curr+=arr[i];
    total=max(total,curr);
    if(curr<0)
     curr=0;
 }
 return total;
}
int main()
{
int arr[]={-3,8,-2,4,-5,6};
cout<<Maxsub(arr,6);
}