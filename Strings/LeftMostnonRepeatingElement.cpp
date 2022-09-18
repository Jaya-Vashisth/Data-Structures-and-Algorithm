//program to give the left most reapeting element from the string
// hqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvs

#include<bits/stdc++.h>
using namespace std;

char leftmostReapetingElement(string s)
{
    int leng=s.length();

    bool visited[256]={false};
    
    char res=s[leng-1];
   

    //check each element from right to left mark it  in visited array 
    for(int i=leng-1; i>=0 ; i--)
    {
        //if the element is not  visited then assign it as result
         if(!visited[s[i]])
         {  
            cout<<s[i]; 
            res=s[i]; 
            visited[s[i]]=true;
         }
    }

    return res;
}

int main()
{
    string s="hqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvs";

    cout<<leftmostReapetingElement(s);
}