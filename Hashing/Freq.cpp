#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n){
for(int i=0;i<n;i++){
    bool flag=false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
        flag=true;
        break;
        }
    }
    if(flag==true)
    continue;
  int freq=1;
  for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j])
      freq++;
  }  
  cout<<arr[i]<<" "<<freq<<endl;
}
}
int main()
{
    int arr[]={5,6,7,8,6,9,9,5,7};
    freq(arr,9);
}