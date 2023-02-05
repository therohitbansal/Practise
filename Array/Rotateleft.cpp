#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high)
{
while(low<high)
{
swap(arr[low],arr[high]);
low++;
high--;
}
}
void leftrotate(int arr[],int n,int d)
{
reverse(arr,0,d-1);
reverse(arr,d,n-1);
reverse(arr,0,n-1);
}
void rightrotate(int arr[],int n,int d){
     reverse(arr,0,n-1);
    reverse(arr,d,n-1);
    reverse(arr,0,d-1);
   
}
int main()
{
    int arr[]={5,6,7,8,4};
    rightrotate(arr,5,1);
    for(int x:arr)
    {
        cout<<x;
    }
}