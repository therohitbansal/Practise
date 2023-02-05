#include <bits/stdc++.h>
using namespace std;
void cyclesortDistinct(vector<int>&v)
{
for(int cs=0;cs<v.size()-1;cs++)
{
    int item=v[cs];
    int pos=cs;
    for(int i=pos+1;i<v.size();i++)
    {
        if(item>v[i])
        pos++;
    }
    swap(v[pos],item);
    while(pos!=cs)
    {
        pos=cs;
      for(int i=pos+1;i<v.size();i++)
    {
        if(item>v[i])
        pos++;
    }
    swap(v[pos],item);    
    }
}
}
int main() {
    cout << "Hello World" << endl;
    vector<int>v={4,2,3,9,4,7};
    cyclesortDistinct(v);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}