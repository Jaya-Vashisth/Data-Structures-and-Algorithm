#include<bits/stdc++.h>

using namespace std;

 double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int i1,i2;
        int n1=array1.size();

        
        int n2= array2.size();
        int begin=0;
        int end=n1;
        
        cout<<n1;
        cout<<n2;
        
        while(begin<=end)
        {
            i1=(begin+end)/2;
            i2= (n1+n2+1)/2 -i1;

            cout<<endl<<i1<<"   "<<i2<<endl;
            
            int min1=(i1==n1)?INT_MAX:array1[i1];
            int max1=(i1==0)?INT_MIN:array1[i1-1];
            int min2=(i2==n2)?INT_MAX:array2[i2];
            int max2=(i2==0)?INT_MIN:array2[i2-1];

            cout<<"\n\n"<<min1<<" "<<max1<<" "<<min2<<" "<<max2<<" ";
            
            if( (max1<=min2) && (max2<=min1))
             {
                 if((n1+n2)%2==0)
                 {
                     return (double)(max(max1,max2)+ min(min1,min2))/2;
                 }
                 else
                     return (double)max(max1,max2);
             }
           else if(max1>min2)
                    end=i1-1;
                else
                  begin=i1+1;
        }
        // Your code goes here
    
    }

    int main()
     {
    //     int m = 2, n = 4;
    //     int array1[] = {4,6};
    //     int array2[] = {1,2,3,5};

        vector<int>array2={1,5,9};
        vector<int>array1={2,3,6,7};

        cout<<MedianOfArrays(array1,array2);
    }