#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,query;
cin >> n>> query;   //number of row and queries to be executed

int** arr = new int* [n];     //allocating size

for(int i=0;i<n;i++) {

    int column;                 //size of each array 
    cin>>column; 

    
    int* b=new int [column];   
     *(arr+i)=b;                 
    
    for(int j=0;j<column;j++) {           //values in arrays
        int value;
        cin>>value;
        b[j]=value;
    }

   
}

for(int i=0;i<query;i++) {                //queries input
  int r,c;                                //address of each element
  cin >> r >> c;
  cout << arr[r][c] << endl;
}

return 0;
}