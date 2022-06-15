#include<bits/stdc++.h>

using namespace std;

int findMissing(int arr[], int n) { 
        
        int positive=0; 

        for(int i=0; i< n ; i++)
        {  
            
            
            if(arr[i]>=0)
            {
                swap(arr[i],arr[positive]);
                positive++;
            }
        }

        for(int i=0; i<=n ;i++)
        {
            if(abs(arr[i]-1)>=0 && arr[i]<=n)
            {
                arr[arr[i]-1]= - abs(arr[arr[i]-1]);
            }
        }
        

        for(int i=1; i<n ; i++)
        { 
            if(arr[i]>0)
              return i+1;
        }

       return n+1;



    }

int main()
{
    int arr[]={1,2,3,4,5};
    int n= 5;

    cout<<findMissing(arr,n);

    // for (int i = 0; i < n; i++)

    // {
    //    cout<<arr[i]<<" ";    /* code */
    // }
    
}

