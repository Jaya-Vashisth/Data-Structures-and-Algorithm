// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(int arr[],int N, int P)
    { 
       
        
        int devisor= N;
        
        for(int i=0; i<N ;i++)
        {
            if(arr[i]<=N)
              arr[i]= arr[i]*devisor+1;
              
        }
        
         

        for(int i=0; i<N; i++)
        {  

            if(arr[i]>N)
              arr[(arr[i]/devisor)-1] =  (arr[i] % devisor);
            else
              arr[arr[i]-1]++;
            

        }
        
    
        for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
        
        
    }
};


// { Driver Code Starts.

int main() 
{ 
	int arr[]={2, 3, 2, 3, 5};
    int n=5;
    int p=5;

    Solution s;
    s.frequencyCount(arr,n,p);


}




  // } Driver Code Ends