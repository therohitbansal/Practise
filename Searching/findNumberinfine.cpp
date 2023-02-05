#include <bits/stdc++.h>
using namespace std;
int infinitenumber(vector<int>&v,int target){
if(v[0]==target)
return 0;
int i=1;
    while(v[i]<target)
    {
      i*=2;
    }
    int j=i/2+1;
    if(v[j]==target)
    return j;
    else{
    while(j<=i)
    {   int mid=(i+j)/2;
        if(v[mid]==target)
        return mid;
        if(v[mid]<target)
        j=mid+1;
        else
        i=mid-1;
    }
    }
    return -1;
}
int main() {
    vector<int>v={20,30,40,50,60,70,80};
   cout<<infinitenumber(v,40);
    return 0;
}
