#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[]={4,5,1,2,9,3};
    for(int i=1;i<6;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i:a)
    {
        cout<<i;
    }

    return 0;
}