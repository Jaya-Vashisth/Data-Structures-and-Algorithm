
//program to count the total set bit in a number

//2.naive approach - left shift the number by 1 and check each time whether the bit is 1 or not 
//2.algorithm - using and operator as n and n-1  will always have the left most set bit change thus can be counted until the number become 0
//3.table method and devide the number in chunks of 8 bit 

#include<bits/stdc++.h>
using namespace std;

int count_naive( int n)   //naive approach
{   

    int count=0; 

    while(n>0)
    {
       if((n & 1)!=0)
         count++;
       
       n=n>>1;
    }

    return count;
}

int Brion_Kernigon_algo(int n)    //algo using increement and one bit difference 
{   int count =0; 
    while(n>0)
    {   
        n=n & (n-1);
        count ++;
    }

    return count;

}

int table[256];

void look_table()       //table to store the no of set bits in each element
{
    table[0]=0;

    for(int i=0; i< 256; i++)
    {
        table[i]= (i & 1)+ table[i/2];
    
    }

}

int count_table_method(int n)
{   
   
    int count= table[n & 0xff];           //count the number of set bits in the first chunk of 8 bit
    n= n>>8;
    

    count= count +  table[n & 0xff];
    n=n>>8;

    count= count +  table[n & 0xff];
    n=n>>8;

    count = count+ table[ n & 0xff];
    n=n>>8;

    count = count+ table[ n & 0xff];

    
    return count;


}

int main(){

  int n=9;

  look_table();
  int count=count_table_method(n);

  cout<<count;

}