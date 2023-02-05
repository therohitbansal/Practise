#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>u;
    u.insert(5);
    u.insert(6);
    u.insert(8);
    for(auto it=u.begin();it!=u.end();it++)
    {
        cout<<*it;
    }
    if(u.find(10)==u.end())
    cout<<"NO";
    else
    cout<<"YES";
   cout<<*(u.find(5));
   auto it=u.find(6);
   u.erase(it);
    cout<<endl;
    u.erase(5);
    for(auto it=u.begin();it!=u.end();it++)
    {
        cout<<*it;
    }
}