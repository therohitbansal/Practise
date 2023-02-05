#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[]={8,2,1,4,9,7};
    for(int i=0;i<5;i++)
    { int min=i;
        for(int j=i+1;j<6;j++)
        {
           if(a[j]<a[min])
           min=j;
        }
        swap(a[i],a[min]);
    }
   for(int i:a)
   cout<<i;
    return 0;
}