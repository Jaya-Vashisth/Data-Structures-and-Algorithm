#include<bits/stdc++.h>
using namespace std;

 long long findSubarray(long long arr[], int n ) {
        //code here
        unordered_set<long long>s;
        unordered_map<long long,long long>m;
        
        long long count=0;
        long long presum=0;
        
        for(int i=0 ; i<n ; i++)
        {
            presum+=arr[i];
            m[presum]++;
        }
        
        for(auto i=m.begin(); i!=m.end(); i++)
           cout<<i->first<<" "<<i->second <<endl;
           cout<<endl;
        
          
        if(arr[0]==0)
         m[0]++;
         
         for( auto i= m.begin() ; i!=m.end() ; i++)
         {
             count+= (i->second * (i->second-1))/2;
         }
         
         return count;
    }

    int main()
    {
        long long arr[]={0,0,5,5,0,0,};
        int n=6;

        cout<<findSubarray(arr,n);
        
    }