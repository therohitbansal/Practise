#include<bits/stdc++.h>
using namespace std;
int countDist(int *arr,int n)
{
    int res=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;

            }
        }
        if(flag==false)
        res++;
    }
    return res;
}
int count_set(int arr[],int n){
    unordered_set<int>s(arr,arr+n);
    return s.size();
}
int main()
{
    int arr[]={5,6,7,8,6,9,9,5,7};
    cout<<countDist(arr,9);
    cout<<count_set(arr,9);
}