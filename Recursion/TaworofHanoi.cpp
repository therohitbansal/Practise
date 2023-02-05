#include<iostream>
using namespace std;
void Toh(int n,char A,char B,char C)
{
if(n==1)
cout<<"Move 1 disc from "<< A <<" to "<<C<<endl;
else
{
    Toh(n-1,A,C,B);
    cout<<"Move "<<n<<" Disc from "<<A<<" to "<<C<<endl;
    Toh(n-1,B,A,C);
}
}
int main()
{
    Toh(5,'A','B','C');
}