#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        int mid_ind=i;
        for(int j=i+1;j<v.size();j++)
            if(v[j]<v[mid_ind])
                mid_ind=j;
    swap(v[i],v[mid_ind]);
    }
}
int main() {
vector<int>v={4,7,8,2,3};
selectionsort(v);    
   for(int i:v)
   cout<<i;
    return 0;
}