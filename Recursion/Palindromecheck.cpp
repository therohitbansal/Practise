#include<iostream>
using namespace std;
bool Palindromecheck(string s,int start,int end)
{
if(start>=end)
return true;
else
return (s[start]==s[end])&& Palindromecheck(s,start+1,end-1);
}
int main()
{
    string p="PUOUP";
    cout<<Palindromecheck(p,0,p.length()-1);
}