#include<bits/stdc++.h>
using namespace std;

 string countSort(string arr){
       
       int count[26]={0};
       
       int n=arr.size();


       
       for(int i=0; i<n; i++)
       {
           count[arr[i]-'a']++;
           
       }
       
       for(int i=1; i<26; i++)
       {   
           count[i]+=count[i-1];
       }
      
      
       vector<char>v(n);

       
       for(int i=n-1; i>=0; i--)
       {
           v[--count[arr[i]-'a']]=arr[i];
       }


       for(int i=0; i<n; i++)
         { arr[i]=v[i];
         
         }
       return arr;
       
    }

    int main()
    {
        string arr="geeksforgeeks";

       arr=countSort(arr);

       cout<<arr;
    }