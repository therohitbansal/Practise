#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
	public:
	string digitsNum(int N)
	{
	    stack<int>s;
	    int R=N;
	    while(N>9)
	    {
	        s.push(9);
	        N=N-9;
	    }
	   s.push(N);
	   string rev="";
	   while(!s.empty())
	   {
	       rev+=to_string(s.top());
	       s.pop();
	   }
	    
	    
	    for(int i=0;i<R;i++)
	    {
	        rev+='0';
	    }
	    return rev;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		string ans = ob.digitsNum(n);
		cout << ans <<"\n";
	}
	return 0;
}