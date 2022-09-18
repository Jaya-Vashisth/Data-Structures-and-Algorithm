//program to check weather anagram or not 

#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2)
{
    int count[256]={0};
     

     //string are of different length
    if(s1.length()!=s2.length())
      return false;
    
    //increase count of ith index if present in s1 or decrease if present in s2
    for(int i=0 ; i<s1.length(); i++ )
     {
          count[s1[i]]++;
          count[s2[i]]--;
     }

     //every ith element will be zero if strings are anagram 
     for(int i=0 ; i<256; i++)
        if(count[i]!=0)
          return false;

    return true;

}

int main()
{
    string s1="geekforgeek";
    string s2="geekgetkfor";

    cout<<checkAnagram(s1,s2);
}