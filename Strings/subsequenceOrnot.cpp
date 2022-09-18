#include<bits/stdc++.h>
using namespace std;


bool SubsequenceOrNot(string s1,string s2)
{ 
    int l1=s1.length();
    int l2=s2.length();

    int i=0 , j=0;
    
    //traverese the strings until traverse one of them fully
    while(i<l1 && j<l2)
    {   
        //increement count when get the current element of s2 in s1
        if(s1[i]==s2[j])
          {
            i++;
            j++;
          }
        else i++;
    }

    return l2==j;   //return true if after traversal j equals to length of string 2 
}

int main()
{
    string s1="geekforgeek";
    string s2="krk";

    cout<<SubsequenceOrNot(s1,s2);
}