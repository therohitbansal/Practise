#include<iostream>
using namespace std;
int pow(int n,int k){
    if(k==0)
    return 1;
    return n*pow(n,k-1);
   
}
int main()
{
cout<<pow(5,4);
}