#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={6,7,7,3,9,5};
    int sum=14;
    set<int>s;
    int flag=0;
    for(int i=0;i<6;i++){
        if(s.find(sum-arr[i])!=s.end()){
        cout<<"yes";
        flag=1;
        break;
        }
        s.insert(arr[i]);
    }
    if(flag==0)
    cout<<"No";
}