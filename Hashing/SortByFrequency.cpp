// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function


    //function to compare the element on basis of frequency 
    static bool compare(pair<int,int>&p1, pair<int,int>&p2)
    {  
        //if frequency is same then return the smaller element
        if(p1.second==p2.second)
          return p1.first<p2.first;
         
        //  return which has higher frequency
         return p1.second>p2.second;
    }
    

    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        unordered_map<int,int>mp;
        vector<int>ans;
        
        int j=0;

        //store the element with the frequency in hash map    
        for(int i=0 ; i<n ; i++)
           mp[arr[i]]++;
           
        int size= mp.size();
        
        
        vector<pair<int,int>>res(size);
        
        // copy the map key-value pair in vector of pair to sort by frequency
        for(auto i=mp.begin(); i!=mp.end(); i++)
            res[j++]=make_pair(i->first,i->second);
        

        //sort the vector on basis of function returned compare
        sort(res.begin(), res.end(), compare);
        
        //store result in vector 
        for(int i=0 ; i<res.size() ; i++)
        {
            int frequency= res[i].second;
            
            //copy element euqals to the frequency of the element
            while(frequency--)
            {
                ans.push_back(res[i].first);
            }
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends