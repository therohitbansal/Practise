#include <bits/stdc++.h>
using namespace std;
void Insertionsort(vector<int> &v){
    for(int i=1;i<v.size();i++)
    {
        int j=i-1;
        int key=v[i];
        while(j>=0 && v[j]>key)
        {
             v[j+1]=v[j];
             j--;
        }
        v[j+1]=key;
    }
}
int main() {
vector<int>v={4,7,8,2,3};
Insertionsort(v);    
   for(int i:v)
   cout<<i;
    return 0;
}