#include<bits/stdc++.h>

using namespace std;
int subArray(int *arr,int size,int sum) 
{
unordered_map<int,int>mp;
int pre=0;
int res=0;
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
int main()
{
    int arr[]={5,8,4,-4,0,-2,2};
    cout<<subArray(arr,7,0);
     return 0;
}