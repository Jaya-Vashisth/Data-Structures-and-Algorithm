#include<bits/stdc++.h>
using namespace std;

void frequecyelement(int arr[], int n)
{
    unordered_map<int,int>s;
   
   for(int i=0 ; i<n ; i++)
    {
        s[arr[i]]++;
    }

    for(auto x:s)
    {
       cout<<x.first<<"  "<<x.second<<endl;
    }
}
int main()
{
    
    int arr[]={3,3,4,2,1,5,2};
    int size=7;

   frequecyelement(arr,size);

}
