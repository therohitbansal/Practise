#include<bits/stdc++.h>

using namespace std;
int Lcs(int arr[],int n)
{
    sort(arr,arr+n);
    int curr=1,res=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]+1==arr[i+1])
        curr++;
        else
        {
            res=max(curr,res);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}
int optLcs(int arr[],int n){
    set<int>s;
    int count=1,res=1;
    for(int i=0;i<n;i++)
    {
     s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end())
        count++;
        else
        {
          res=max(count,res);
        count=1;
        }
    }
    res=max(count,res);
    return res;
}
int main()
{
    int arr[]={1,9,3,4,2,20,22,23,24,25,26};//1,2,3,4,9,20,22,23,24,25,26
    cout<<optLcs(arr,11);
     return 0;
}