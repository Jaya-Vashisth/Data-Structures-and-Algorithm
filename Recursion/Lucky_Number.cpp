// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:

    bool isleft(int n, int k , int index)
    {   if((index % k) ==0) //element will be deleted at this iteration 
            return false;
        else
        
        if(index<k )            //when the step size become greater than element index then it's lucky number
        { 
            return true;
        }
       else
          return isleft(n,k+1, index- (index/k));      //check in further iteration
    }
    bool isLucky(int n) {
        
        return isleft(n,2,n);
        // code here
    }
};

// { Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends