#include<bits/stdc++.h>
using namespace std;

 long long findSubarray(long long arr[], int n ) {
    
        unordered_set<long long>s;
        unordered_map<long long,long long>m;
        
        long long count=0;
        long long presum=0;
        
        for(int i=0 ; i<n ; i++)
        {  presum+=arr[i];
        
           if(presum==0)
             count++;
          
           if(m.find(presum)!=m.end())
             count+=m[presum];
            
           m[presum]++;
        }
      
     
         return count;
 }


    int main()
    {
        long long arr[]={0,0,5,5,0,0,};
        int n=6;

        cout<<findSubarray(arr,n);
        
    }