// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==1)
//     return 1;
//     return n+sum(n-1);
// }
// int main()
// {
// cout<<sum(5);
// }
#include<iostream>
using namespace std;
int sum(int n,int k){
    if(n==1)
    return k;
    return sum(n-1,n+k);
}
int main()
{
cout<<sum(5,1);
}