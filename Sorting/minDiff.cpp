#include <bits/stdc++.h>
using namespace std;
int mindiff(vector<int>&v)
{
    sort(v.begin(),v.end());
int currdif=v[1]-v[0];
//int ans=-1;
for(int i=2;i<v.size();i++)
{
if(currdif>(v[i]-v[i-1]))
{
currdif=v[i]-v[i-1];
}
}
return currdif;
}
int main() {
    vector<int>v={1,8,12,5,18};
    cout<<mindiff(v);
    return 0;
}