#include<iostream>
using namespace std;
int main()
{
   int arr[]={4,4,5,6,7,7};
   int res=0;
   for(int i=0;i<6;i++)
   {
    res=res^arr[i];
    
   }
   cout<<res; 
}