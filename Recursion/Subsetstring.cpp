#include<iostream>
using namespace std;
void Substring(string &s, string curr,int i)
{
if(i==s.length())
{
    cout<<curr<<" ";
    return;
}
Substring(s,curr,i+1);//i=2 i=1
Substring(s,curr+s[i],i+1);
}
int main()
{
    string s="ABC";
    Substring(s,"",0);
}