#include<bits/stdc++.h>

using namespace std;

  int check_bit(int pattern, int arr[], int n)
    {  
        int count=0;
        for(int i=0;i<n ;i++)
        {
            if( ( pattern & arr[i])==pattern)
              count ++;
        }


        
        return count;
    }
    int maxAND (int arr[], int N)
    {
        int result=0, count;
        
        for(int i=31;i>=0;i--)
        {
            count= check_bit(result|(1 << i),arr,N);

            
            
            if(count>=2)
             result= result | (1 << i);
        }// Your code here
        
        return result;
    }

int main()
{    int arr[]={4,8,12,16};
     int value= maxAND(arr,4);

   cout<<value;
}