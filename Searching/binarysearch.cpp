// 59
// 1 2 3 4 5 6 8 9 10 14 16 19 22 23 25 26 27 29 31 34 35 36 38 39 40 45 46 48 50 51 52 57 59 60 61 63 67 68 69 71 75 76 77 79 81 82 83 86 87 88 90 92 93 94 95 96 98 99 100


#include<iostream>

using namespace std;

int binarysearch(int arr[], int n,int k)
{
      
        int low=0;
        int high=n-1;
        
        while(low<=high)
        {
            int mid= (low+high)/2;
            
            if(arr[mid]==k)
              return mid;
            else
              if(arr[mid]>k)
                high=mid-1;
            else
                low=mid+1;
        }
        
        return -1;
}

int main()
{
   int arr[]={1 ,2, 3, 4, 5, 6, 8, 9, 10, 14, 16, 19, 22, 23, 25, 26, 27, 29, 31, 34, 35, 36, 38, 39, 40, 45, 46, 48, 50, 51, 52, 57, 59, 60, 61, 63, 67, 68, 69, 71, 75, 76, 77, 79, 81, 82, 83, 86, 87, 88, 90, 92, 93, 94, 95, 96, 98, 99, 100};

   

   int n=59;

   cout<<binarysearch(arr,n,93);

}