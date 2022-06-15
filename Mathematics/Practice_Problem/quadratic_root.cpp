#include <bits/stdc++.h>

using namespace std;

 vector<int> quadraticRoots(int a, int b, int c) {
        
        vector<int>root;
        
        double d= (b*b - 4*a*c);
        
        if(d<0)
       {    root.push_back(-1);
            return root;
       }
        
        double r1 = (-b + sqrt(d))/(2*a);
        root.push_back(floor(r1));
        
        double r2 = (-b - sqrt(d))/(2*a);
        root.push_back(floor(r2));
       
        
        
         if(r2>r1)
          swap(root[0],root[1]);
          
        return root;
 }

 