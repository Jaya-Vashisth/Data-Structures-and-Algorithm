//Program to find the digital root of a given number 
// example n= 99999 sum= 45 sum(sum)= 9 digital root=9

#include<bits/stdc++.h>

using namespace std;


//function to calculate sum of digits of a number
int sum_of_digits(int n) 
{   if(n<=9)
      return n;

   return  sum_of_digits(n/10)+ n%10;      

  
}

//function to check wheter the sum obtained is digital root or not if not then call recursive function digitalroot for the obtained sum
int digitalroot(int n)
{
    
    int sum = sum_of_digits(n);

    if(sum<9)
    {
       return sum;
    }
    
    else
      sum = sum_of_digits(sum);


}
int main(){

    int n=0;

    cout<<"Enter the number : ";
    cin>>n;

    int sum=digitalroot(n);

    cout<<"Digital root of given number is : "<<sum;
}