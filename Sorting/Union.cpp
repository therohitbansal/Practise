#include <bits/stdc++.h>
using namespace std;
void unionfun(vector<int>v1,vector<int>v2)
{
vector<int>res;
int i=0,j=0;
while(i<v1.size() && j<v2.size())
{   if(v1[i]==v1[i-1] && i>0)
     {
      i++;
     continue;
     }
    if(v2[j]==v2[j-1] && j>0)
    {j++;
    continue;
    } 
    if(v1[i]<v2[j])
    { 
        res.push_back(v1[i++]);
    }
    else if(v1[i]>v2[j])
     {
      
        res.push_back(v2[j++]);
    
     }
     else{
   
        res.push_back(v1[i++]);
        j++;
        
     }
}

while(i<v1.size())
{
   if(i>0 && v1[i-1]!=v1[i])
    res.push_back(v1[i++]);
    else
    i++;
}
while(j<v2.size())
{
   if(j>0 && v2[j-1]!=v2[j])
    res.push_back(v2[j++]);
    else
    j++;
}
for(int x:res)
{
cout<<x<<" ";
}
}
int main() {
   vector<int>v1,v2;
   v1={2,5,8,9,11,11};
   v2={5,6,8,12,12};
   unionfun(v1,v2); 
    return 0;
}