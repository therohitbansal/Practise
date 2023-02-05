#include<bits/stdc++.h>

using namespace std;
int subArray(int *arr,int size,int sum) 
{
unordered_map<int,int>mp;
int pre=0;int res=0;
for(int i=0;i<size;i++){
    pre+=arr[i];
    if(pre==sum)
     res=i+1;
    if(mp.find(pre)==mp.end())
    mp.insert({pre,i});
    if(mp.find(pre-sum)!=mp.end()) //longest subarray with given sum
     res=max(res,i-mp[pre-sum]);
}
return res;
}
int Longestsamesum(int arr1[],int arr2[],int n1,int n2){
int res=0;

for(int i=0;i<n1;i++){
    int sum1=0,sum2=0;
   for(int j=i;j<n2;j++){
    sum1+=arr1[j];
    sum2+=arr2[j];
    if(sum1==sum2)
    {
        res=max(res,j-i+1);
    }
   }

}
return res;
}
int Longestsubsum(int arr1[],int arr2[],int n){
    int res=0;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr1[i]-arr2[i];
    }
    return subArray(temp,n,0);
}
int main()
{
    int arr1[]={0,1,0,0,0,0};
    int arr2[]={1,0,1,0,0,1};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
   cout<<Longestsubsum(arr1,arr2,n1);
     return 0;
}