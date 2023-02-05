// #include<iostream>
// using namespace std;
// int main()
// {
//     int temp[8];
//     int r=0,i;
//     int arr[]={0,5,0,0,7,0,8,9};
//     for(i=0;i<8;i++)
//     {
//        if(arr[i]==0)
//        continue;
//        else
//        {
//         temp[r++]=arr[i];
//        }
//     }
//     while(r<i)
//     {
//         temp[r]=0;
//         r++;
//     }
//     for(int j=0;j<8;j++)
//     {
//      cout<<temp[j]<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main()
{
    
    int r=0,i;
    int arr[]={6,5,0,0,7,9,0,8,9};
    for(i=0;i<9;i++)
    {
       if(arr[i]!=0){
       swap(arr[r],arr[i]);
       r++;
       }
    }
    for(auto x:arr)
    {
        cout<<x;
    }
}