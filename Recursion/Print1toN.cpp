// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0)
//     return ;
//       fun(n-1);
//  cout<<n<<" ";   
   
// }
// int main()
// {
// fun(5);
// }
//To make it tail recursive
#include<iostream>
using namespace std;
void fun(int n,int k){
    if(n==0)
    return ;
    cout<<k<<" ";
    fun(n-1,k+1);
   
}
int main()
{
fun(5,1);
}