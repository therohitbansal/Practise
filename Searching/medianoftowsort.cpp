#include <bits/stdc++.h>
using namespace std;
vector<int>mergearray(vector<int>&v1,vector<int>&v2)
{
    int i=0,j=0,k=0;
    vector<int>v3;
    int m=v1.size()+v2.size();
    
while(i<v1.size()&&j<v2.size()){
    if(v1[i]<v2[j])
        v3.push_back(v1[i++]);
    else
        v3.push_back(v2[j++]);
} 
     while(i<v1.size())
     {
     v3.push_back(v1[i++]);
    }
     while(j<v2.size())
     {
      v3.push_back(v2[j++]);
     }
    return v3;
}
double median(vector<int>v1,vector<int>v2)
{
    vector<int>v=mergearray(v1,v2);

int i=0,j=v.size()-1;
int mid=(i+j)/2;
if((j%2)!=0)
{
    return ((v[mid]+v[mid+1])/2.0);
}
else
return v[mid];
}

int main() {
    vector<int>v1,v2;
     v1={1,2};
     v2={3,4};
    cout<<median(v1,v2);
    
    return 0;
}