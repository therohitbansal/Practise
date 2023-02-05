#include <bits/stdc++.h>
using namespace std;

int firstoccuof(vector<int>&v,int l,int h,int target)
{ 
    while(l<=h)
    {
        int mid=(l+h)/2;
     if(v[mid]<target)
     h=mid-1;
     else if(v[mid]>target)
     l=mid+1;
     else{
        if(mid==0||v[mid]!=v[mid-1])
        return mid;
        else
        h=mid-1;
     }
    }
    return -1;
}

int lastoccuof(vector<int>&v,int l,int h,int target)
{ 
    
    while(l<=h)
    {
        int mid=(l+h)/2;
     if(v[mid]<target)
     h=mid-1;
     else if(v[mid]>target)
     l=mid+1;
     else{
        if(mid==h||v[mid]!=v[mid+1])
        return mid;
        else
        l=mid+1;
     }
    }
    return -1;
}
int countOccurence(vector<int>&v)
{
int first=firstoccuof(v,0,v.size()-1,7);
if(first==-1)
return 0;
else
return (lastoccuof(v,0,v.size()-1,7)-first+1);
}
int main() {
    vector<int>v={5,6,7,7,7,8};
    int n=v.size()-1;
    cout<<countOccurence(v);
    return 0;
}