
#include<bits/stdc++.h>
using namespace std;


//return whether the subarray present in the array with zero sum
bool subarraySum(int arr[], int n,int sum)
{
    unordered_set<int>s;
    int pre_sum=0;

    for(int i=0 ; i<n ; i++)
    {
        pre_sum+=arr[i];
        

        //if the sum equals to prefix sum
        if(pre_sum==sum)
          return true;

        //case when a subarray have prefix sum equal to given sum -->implies prefix_sum till here - sum already present in hash
        if(s.find(pre_sum-sum)!=s.end())
          return true;
      

        s.insert(pre_sum);
    }

    return false;
}


int main()
{
    int arr[]={-3,-1,-2,3,7};
    int n=5;

    cout<<subarraySum(arr,n,10);
}