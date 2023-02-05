#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int>&v,int exp){
    int k=10;
vector<int>temp(k,0);
for(int i=0;i<v.size();i++)
temp[(v[i]/exp)%10]++;
for(int i=1;i<k;i++)
{
    temp[i]=temp[i-1]+temp[i];
}
vector<int>output(v.size());
for(int i=v.size()-1;i>=0;i--)
{
    output[temp[(v[i]/exp)%10]-1]=v[i];
    temp[(v[i]/exp)%10]--;
}
v=output;
}
void radixsort(vector<int>&v){
    int mx=v[0];
    for(int i=1;i<v.size();i++){
       if(v[i]>mx)
         {mx=v[i];
         }
    }
    for(int exp=1;mx/exp>0;exp=exp*10)
       countSort(v,exp);        //@(d*(n+b))

}

int main() {
    vector<int>v={319,212,6,8,10,50};
    radixsort(v);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}