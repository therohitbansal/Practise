#include<iostream>
using namespace std;
int findmajorityelement(int *arr,int n)
{
for(int i=0;i<n;i++){
     int count=1;
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      count++;
    }
      if(count>n/2)
      return i;
}
return -1;
}
int main()
{
    int arr[]={5,6,7,3,3,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<findmajorityelement(arr,size);

}