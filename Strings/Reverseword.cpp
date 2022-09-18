#include<bits/stdc++.h>
using namespace std;

string reverse(int start, int end, string s)
    {
        while(start<end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }

        return s;
        
    }
    string reverseWords(string S) 
    { 
        string s;
        
        for(int i=0 ; i<S.length();i++)
        {
            while(S[i]!='.'&& i<S.length())
             { s+=s[i];
                i++;
             }
             
           S = reverse(i-s.length(),i-1,S);
            
            s="";
        }
        
       S=reverse(0,S.length()-1,S);

      return S;
        
    } 

    int main(){
        string s= "i.like.this.very.much";

         s= reverseWords(s);

         cout<<s;
    }