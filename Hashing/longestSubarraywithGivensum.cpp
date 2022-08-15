#include<bits/stdc++.h>
using namespace std;


//return whether the subarray present in the array with zero sum
int subarraySum(int arr[], int n,int sum)
{
    unordered_map<int,int>s;
    int pre_sum=0;
    int res=0;

    for(int i=0 ; i<n ; i++)
    {
        pre_sum+=arr[i]; 
        
        
        //if the sum equals to prefix sum
        if(pre_sum==sum)
          res=i+1;
        
        //isert the prefix sum and index if it is not in the hash(so that duplicate pre_sum with small subarray not included)
        if(s.find(pre_sum)==s.end())
          s.insert({pre_sum,i});

        //case when a subarray have prefix sum equal to given sum -->implies prefix_sum till here - sum already present in hash
        if(s.find(pre_sum-sum)!=s.end())
         {
            res=max(res,i-s[pre_sum-sum]);
         }
      
    }

    return res;
}


int main()
{
    int arr[]={8,3,1,5,-6,6,2,2};
    int n=8;

    cout<<subarraySum(arr,n,3);
}