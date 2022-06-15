#include<bits/stdc++.h>

using namespace std;

 //Function to find list of all words possible by pressing given numbers.
    
    vector<string>Words;
    
    void generate_words(int index, string new_word, string match[], int a[],int N,int array_index)
    {      
       if(array_index>N-1)
         {
             Words.push_back(new_word);
             return;
         }
        
        if(index<2||index>9 )
          return;
       
      
         
       string value= match[index];
       
       
       
       for(int j=0; j<value.length(); j++)
       {   
           new_word= new_word+ value[j];
           generate_words(a[array_index+1], new_word, match,a, N, array_index+1);
           new_word.pop_back();
           
       }
       
    }
   void possibleWords(int a[], int N)
    {
      string match[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

      string new_word="";

      
      generate_words(a[0],new_word, match, a, N,0);
      
    }

    int main()
    {   
        int a[]={2,3,4};
        int N=3;

       

         possibleWords(a,N);

        for(int i=0; i< Words.size();i++)
           cout<<Words[i]<<"  ";
    }