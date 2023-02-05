#include<bits/stdc++.h>

using namespace std;
bool subArray(int *arr,int size,int sum)
{
unordered_set<int>s;
int pre=0;
for(int i=0;i<size;i++){
    pre+=arr[i];
    if(s.find(pre-sum)!=s.end()) //subarray with given sum
     return true;
    if(pre==sum)
     return true;
    s.insert(pre);
    for(auto it:s)
    cout<<it;
}
return false;
}
int main()
{
    int arr[]={3,6,-5,3,1,-5};
    cout<<subArray(arr,6,4);
     return 0;
}