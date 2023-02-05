#include<bits/stdc++.h>
using namespace std;
void printfreq(int arr[],int n)
{   
int freq=1;
int i=1;
while(i<n){
while(i<n&&arr[i]==arr[i-1])
{
    i++;
    freq++;
}   
cout<<arr[i-1]<<" = "<<freq<<" ";
i++;
freq=1;
}
if(n==1||arr[n-2]!=arr[n-1])
cout<<arr[n-2]<<" = "<<"1"<<" ";
}
int main()
{
int arr[]={3,3,5,6,1,1};
printfreq(arr,6);
}