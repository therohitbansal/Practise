#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int maxGuest(vector<int>arr,vector<int>dep)
{
sort(arr.begin(),arr.end());
sort(dep.begin(),dep.end());
int i=1,j=0,count=1,ans=1;
while(i<arr.size()&&j<dep.size())
{
    if(arr[i]<=dep[j])
    {count++;
    i++;
    }
    else
    {
        count--;
        j++;
    }
    ans=max(count,ans);
}
return ans;
}
int main() {
    vector<int>arr={900,600,700};
    vector<int>dep={1000,800,730};
   cout<<maxGuest(arr,dep);    
    return 0;
}