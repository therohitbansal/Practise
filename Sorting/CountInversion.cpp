#include <bits/stdc++.h>
using namespace std;
int countInversion(vector<int>ans)
{
    int count=0,i=0;
while(i<ans.size()-1)
{
for(int j=i+1;j<ans.size();j++)
{
    if(ans[i]>ans[j])
    count++;
}
i++;
}
return count;
}
int main() {
    vector<int>v={7,5,2,8,3,4};
    cout<<countInversion(v);
    return 0;
}