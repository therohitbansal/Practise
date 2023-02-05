#include<bits/stdc++.h>
using namespace std;
// int CountDist(int arr[],int n){
// int res=0;
// for(int i=0;i<n;i++){
//     bool flag=false;
//     for(int j=0;j<i;j++){
//       if(arr[i]==arr[j])
//       flag=true;
//     }
// if(flag==false)
// res++;
// }
// return res;
// }
// void Intersect(int arr1[],int arr2[],int n1,int n2){
// int temp[n1]={0};
// int k=0;
// //sort(arr1,arr1+n1);
// for(int i=0;i<n1;i++){
//     for(int j=0;j<n2;j++){
//     if(arr1[i]==arr2[j])
//     {
//        temp[k++]=arr1[i];    
//     }
//  }
// }
// for(int p:temp)
// {
//     cout<<p<<" ";
// }
// cout<<CountDist(temp,k);
// }
// int Intersect(int arr1[],int arr2[],int n1,int n2)
// {
//     int res=0;
// for(int i=0;i<n1;i++){
//     bool flag=false;
//     for(int j=0;j<i-1;j++){
//       if(arr1[i]==arr1[j]){
//        flag=true;
//        break;}
//     }   
//        if(flag==true)
//     continue;
//     for(int j=0;j<n2;j++)
//       if(arr1[i]==arr2[j])
//       {
//         res++;
//         break;
//       }   
// }
// return res;
// }
int Intersect(int arr1[],int arr2[],int n1,int n2)
{
unordered_set<int>s;
int res=0;
for(int i=0;i<n1;i++){
  s.insert(arr1[i]);
}
for(int j=0;j<n2;j++){
  if(s.find(arr2[j])!=s.end())
  {
    res++;
    s.erase(arr2[j]);
  }
}
return res;
}
int main(){
int arr1[]={5,6,7,6,5,5,6,4};
int arr2[]={6,7};
cout<<Intersect(arr1,arr2,8,2);
}