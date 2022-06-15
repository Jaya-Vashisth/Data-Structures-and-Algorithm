#include<bits/stdc++.h>
using namespace std;

void two_odd_occuring_element(int a[],int n)
{  
    int element=0; 
    for(int i=0; i<n; i++)
      element = element ^ a[i];            // xor of two elements  gives elments of which bit indicate that corresponding bits in numbers are different 

    
    int ele= ~(element-1);          //result will have the single bit which is different in both groups 

    int set_bit= element ^ ele;

    int x =0,y=0 ;

    for(int i=0 ; i< n ; i++)   //travers the array in two halves so that each one contail the odd occuring element
    {
        if((a[i] & set_bit) !=0)
        x=x^a[i];
        else
          y= y^ a[i];

          
    }

    cout<<"The elements are : "<<x<<" "<<y;

        
}

int main()
{
    int size=0;
    cout<<"Enter the size of array : ";
    cin>>size;
    
    int a[size];

    cout<<"Enter the elements of the array : ";
    for(int i=0; i<size; i++)
      cin>>a[i];

     two_odd_occuring_element(a, size);




}