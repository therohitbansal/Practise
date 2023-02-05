#include<iostream>
using namespace std;
int fun(int n){
    if(n==0)
    return 1;
    return n*fun(n-1);
}
int main()
{
cout<<fun(5);
}
// #include<iostream>
// using namespace std;
// int fun(int n,int k){
//     if(n==0)
//     return 1;
//     return fun(n-1,n*k);
// }
// int main()
// {
// cout<<fun(5,1);
// }