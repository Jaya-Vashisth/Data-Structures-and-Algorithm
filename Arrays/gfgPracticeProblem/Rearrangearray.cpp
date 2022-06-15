// Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself.

// Example 1:

// Input:
// N = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
// Explanation: Max element = 6, min = 1, 
// second max = 5, second min = 2, and 
// so on... Modified array is : 6 1 5 2 4 3.

// approach: orgininal and new element can be stored as : sotre= (max_element +1)*original value + new_value


#include<bits/stdc++.h>
using namespace std;

 void rearrange(long long *arr, int n) 
    { 
    	long long devisor= arr[n-1]+1;
    	int j= n-1;
    	int k=0;
    	
       for(int i=0; i<n ; i++)	// Your code here
    	 {
    	    if(i%2 ==0)                                            //place the biggest element 
    	    {  
    	        arr[i]=devisor*(arr[j]%devisor)+arr[i];     
    	        
    	        j--;
    	    }
    	    else                                                 //element smalles
    	    {
    	        arr[i]= devisor*(arr[k]%devisor) + arr[i];
    	        k++;
    	    }
    	 }
    
      for(int i=0; i<n ;i++)
         arr[i]= arr[i]/devisor;

        for(int i=0; i<n ;i++)
        cout<<arr[i]<<" ";
  
    }

    int main()
    {
        long long arr[]={1,2,3,4,5,6};
        int n=6;

        rearrange(arr,n);
    }