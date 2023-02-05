#include<iostream>
using namespace std;
int Maxcon(int arr[],int n)
{
 int maxcount=0;
 int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        count++;
        else
        count=0;
        maxcount=max(count,maxcount);
    }
    return maxcount;
}
int main()
{
int arr[]={1,1,0,0,1,1,1,0};
cout<<Maxcon(arr,8);
}