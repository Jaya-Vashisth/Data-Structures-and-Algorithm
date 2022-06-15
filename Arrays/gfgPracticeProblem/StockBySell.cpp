//Problem - U have the list of prices of stock at different time find when should sell and buy the stock to get maximum profit
// |
// |           /
// |    /\    /  
// |   /  \  / 
// |  /    \/
// |_/____________


#include<bits/stdc++.h>

using namespace std;

int maxProfit(int arr[], int n)
{
    int profit= 0;

    for(int i=1; i<n ; i++)
    {
        if(arr[i]>arr[i-1])
        profit+= arr[i]-arr[i-1];

    }

    return profit;
}

int main()
{
    
    int arr[]={1,5,3,8,13};
    int n=5;

     cout<<maxProfit(arr,n);
}