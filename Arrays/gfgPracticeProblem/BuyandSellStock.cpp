// The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.




// Input:
// N = 7
// A[] = {100,180,260,310,40,535,695}
// One possible solution is (0 3) (4 6)
// Your Task:
// The task is to complete the function stockBuySell() which takes an array A[] and N as input parameters and finds the days of buying and selling stock. The function must return a 2D list of integers containing all the buy-sell pairs i.e. first value of pair will represent the day on which you buy the stock and second value represent the day on which you sell that stock. If there is No Profit, return an empty list.

 

#include<bits/stdc++.h>


using namespace std;

// 100,180,260,310,40,535,695

vector<vector<int> > stockBuySell(int A[], int n){   
        
        vector<vector<int>> result;
         
         int sell=0;
         int min= A[0];
         
         
        for(int i=1;i<n;i++)
        {
            if(A[i]<=min)            //check the cost at which the stock should be buy
            {
                min=A[i];
                sell=i;
            }
            else
            {
                if( (i<n-1) && (A[i]>A[i+1] )|| i==n-1)             //get the cost at which to be sold 
                {
                 vector<int>v;
                 v.push_back(sell);
                 v.push_back(i);

                //  cout<<sell<<","<<i<<endl;
                 result.push_back(v);
                 
                 min=A[i+1];
                 sell=i+1;

                }
            }
            
           
            
        }
  
        
        
        return result;

}

int main(){


    vector<vector<int>>sell;

    int arr[]= {100,180,260,310,40,535,695};
    int n=7;


    sell=stockBuySell(arr,n);

    for (int i = 0; i < sell.size(); i++)
    {
        for (int j = 0; j < sell[i].size(); j++)
        {
            /* code */cout<<sell[i][j]<<" ";
        }

        cout<<"\n";
               /* code */
    }
    

}