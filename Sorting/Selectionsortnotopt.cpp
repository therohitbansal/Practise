#include <bits/stdc++.h>
using namespace std;

int main() {
    int temp[6];
    int a[]={4,2,1,9,5,6};
   
    for(int i=0;i<6;i++)
    {   int min=0;
        for(int j=1;j<6;j++){
        if(a[j]<a[min]){
           min=j;
         }
        }
        temp[i]=a[min];
        a[min]=INT_MAX;
    }
    for(int i=0;i<6;i++)
    {
        a[i]=temp[i];
    }
    for(int i:a)
    cout<<i;
    return 0;
}