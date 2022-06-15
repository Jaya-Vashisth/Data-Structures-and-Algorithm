#include<bits/stdc++.h>
using namespace std;

int one_odd_occuring_element(int a[],int n)
{  
    int element=0; 
    for(int i=0; i<n; i++)
      element = element ^ a[i];
    
    return element;

        
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

    int element= one_odd_occuring_element(a, size);

    cout<<"The element in array having odd occuring is : "<<element<<endl;



}