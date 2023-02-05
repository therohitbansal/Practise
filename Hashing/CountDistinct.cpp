#include<bits/stdc++.h>

using namespace std;

void countDistinct(int arr[],int n,int k){
unordered_map<int,int>mp;
int count=0;
for(int i=0;i<k;i++){
  mp[arr[i]]++;
}
cout<<mp.size();
for(int i=k;i<n;i++)
{
mp[arr[i-k]]--;
if(mp[arr[i-k]]==0)
{
    mp.erase(arr[i-k]);
}
if(mp.find(arr[i])!=mp.end())
{
mp.insert({arr[i],0});
}
else
{
    mp[arr[i]]++;
}
cout<<mp.size();
cout<<7/2;
}
}
int main()
{
    int arr[]={10,20,10,10,30,10};
    countDistinct(arr,6,4);
     return 0;
}