#include<iostream>
using namespace std;
int MaxlenOddeven(int arr[],int n)
{
 int curr=1;
 int total=0;
 for(int i=0;i<n-1;i++)
 {
    if(arr[i]%2==0 && arr[i+1]%2!=0)
    curr++;
    else if(arr[i]%2!=0 && arr[i+1]%2==0)
    curr++;
    else 
    curr=1;
    total=max(total,curr);
 }
 return total;
}
int main()
{
int arr[]={3,8,2,5,4,6};
cout<<MaxlenOddeven(arr,6);
}