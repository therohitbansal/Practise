#include<iostream>
using namespace std;
int maxProfit(int price[],int start,int end)
{
int profit=0;
for(int i=1;i<end;i++)
{
if(price[i]>price[i-1])
    profit+=(price[i]-price[i-1]);
}
return profit;
}
int main()
{
int arr[]={1,5,3,8,12};
cout<<maxProfit(arr,0,5);
}