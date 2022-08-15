// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {

  public:
  
  long long hcf(int a, int b)
  {
       if(b==0)
         return a;
      
       return hcf(b, a%b);
  }
   
    long long numGame(long long n) {
       
       long long ans=1;

       for(int i=1 ; i<=n ;i++)
       {
          ans= (ans*i)/hcf(ans,i);
       }
      
       return ans%1000000007;
    }
};


// { Driver Code Starts.
int main() {
    // int t;
    // cin >> t;
    // // while (t--) {
        long long n;
        
        cin>>n;

        Solution ob;
        cout << ob.numGame(n) << endl;
    // }
    return 0;
}  // } Driver Code Ends