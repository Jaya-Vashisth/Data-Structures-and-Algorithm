// 14. Rearrange an array with O(1) extra space 
// Medium Accuracy: 54.65% Submissions: 47454 Points: 4
// Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

 

// Example 1:

// Input:
// N = 2
// arr[] = {1,0}
// Output: 0 1
// Explanation: 
// arr[arr[0]] = arr[1] = 0.
// arr[arr[1]] = arr[0] = 1.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
       
       long long devisor =n;
       
       for(int i=0; i<n ; i++)
       {
           arr[i]= devisor* (arr[arr[i]]%devisor) + arr[i]; 
       }// Your code here
       
       for(int i=0;  i< n ;i++)
       {
           arr[i]= arr[i]/devisor;
       }
        
    }
};


// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends