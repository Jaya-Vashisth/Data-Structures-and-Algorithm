#include<bits/stdc++.h>
using namespace std;

void compute_power_set(string st)
{
     int size= st.length(); 
     int pow_size= pow(2,size);

     cout<<endl<<"The power set is as follows : "<<endl;


     for(int counter=0; counter< pow_size; counter++ )        //counter value give the binary representation of the number of power set
     {   cout<<"\" "; 
         for(int j=0; j<size; j++)
         {
             if((counter & (1<<j))!=0)                    //condition which letter to be included in power subset
                cout<<st[j];
         }
 
         cout<<" \""<<endl;
     }

}

int main()
{   string st;

    cout<<"Enter the string : ";
    cin>>st;

    compute_power_set(st);
}