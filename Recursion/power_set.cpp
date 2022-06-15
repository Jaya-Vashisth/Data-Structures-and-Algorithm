// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	   vector<string>subset;
	
	    void AllSubSet(string s, string r, int i)
	    
	    {     
	           
                if(i==s.length()  )
                 { 
                   if(r!="")     
                   subset.push_back(r);
                   return; 
                 }
	            
                 
                 AllSubSet(s,r,i+1);
                 AllSubSet(s,r+s[i],i+1);
                 
            
            
	    }
		vector<string> AllPossibleStrings(string s){
		   
		    string r= "";
		    int i=0;
		    
		     AllSubSet(s,r,i);
		     
		     sort(subset.begin(),subset.end());
		     return subset;
		    // Code here
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends