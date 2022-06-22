#include<bits/stdc++.h>

using namespace std;

 bool isOk(int A[],int N, int M,int min_page)
    {    
        int pages=A[0];
         int student=1;
        
        for(int i=1;i<N; i++)
        {
           
           if( (A[i]+pages) <=min_page)
           {
               pages+=A[i];
           }
           else
           {
               pages=A[i];
               student++;
           }
        }
        
        return student<=M;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {   
        int res=0;
        int end=0;
        int start=A[0];
        
        for(int i=0; i<N; i++)
         {
             end+=A[i];                //sum of pages--> gives max pages a student can have
             start= max(start,A[i]);  //get the minimum page atleast will be there always
         }

         
         
        while(start<=end)                 //range of pages is min to max pages           
        {
         int x= (start+end)/2;
         
        
         if(isOk(A,N,M,x))             //is the pages x combination feasible or notcou
         {
            res=x;
            end=x-1;
         }
         else
         {
             start=x+1;
         }
         
        }
        
        return res;
         //code here
    }

    int main()
    {
        int arr[]={12 ,34 ,67,90};
        int N=4;
        int M=2;

       cout<<findPages(arr,N,M);   
    }