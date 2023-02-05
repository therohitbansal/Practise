#include<bits/stdc++.h>
using namespace std;
struct point{
int x,y;
};
bool comp(point p1,point p2){
    return p1.y<p2.y;
}
int main()
{
point arr[]={{4,9},{2,10},{7,8}};
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n,comp);
for(auto i:arr)
{
    cout<<i.x<<i.y;
}
}