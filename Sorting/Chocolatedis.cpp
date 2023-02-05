#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v={7,3,2,4,9,12,56};
    sort(v.begin(),v.end());
    int m=3;
    int res=v[m-1]-v[0];
    for(int i=1;(i+m-1)<v.size();i++)
    {
     res=min(res,v[i+m-1]-v[i]);
    }
    cout<<res;
    return 0;
}