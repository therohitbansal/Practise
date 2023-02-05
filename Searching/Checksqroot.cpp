#include <bits/stdc++.h>
using namespace std;
int checksqroot(vector<int>&v,int l,int h,int x)
{
int res=-1;
while (l<=h)
{
int mid=(l+h)/2;
int sqrt=mid*mid;
if(sqrt==x)
return mid;
else if(sqrt>x)
h=mid-1;
else{
l=mid+1;
res=mid;
}
}
return res;
}
int main() {
    vector<int>v={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    cout<<checksqroot(v,1,v.size(),19);
    return 0;
}