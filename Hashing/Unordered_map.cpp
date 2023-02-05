#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<string,int>mp;
mp["gfg"]=20;
mp["ide"]=30;
mp.insert({"courses",15});
for(auto x:mp)
    cout<<x.first<<" "<<x.second<<endl;
auto it=mp.find("gfg");
if(it!=mp.end()){
    cout<<it->second;
}
cout<<mp.count("gfg");
mp.erase(mp.begin(),mp.end());
for(auto x:mp)
    cout<<x.first<<" "<<x.second<<endl;
return 0;
}