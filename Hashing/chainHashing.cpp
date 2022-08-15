#include<bits/stdc++.h>
using namespace std;

class hashmap
{
   
   int bucket;                                        //bucket equal to size of the array
   list<int>*table;                                   //linked list for chaining

   public:

   hashmap(int b)                                         //constructor initialize bucket size and array of linked list
   {
     bucket=b;
     table= new list<int>[b];
  }
   
   //insert function to insert the element in the hash table
   void insert(int key)
   {
     int i= key% bucket;
     table[i].push_back(key);

   }

    //function to delete the element from the hash map
   void delet(int key)
   {
    int i= key%bucket;
    table[i].remove(key);
   }

   //search function 
   bool search(int key)
   {
    int i=key%bucket;

    for( auto x:table[i])
    {
        if(x==key)
          return true;
        
    }
    return false;
   }
};


int main()
{
    hashmap h(7);

    h.insert(70);
    h.insert(71);
    h.insert(56);
    h.insert(9);
    h.insert(2);

    cout<<h.search(3);
    h.delet(70);
    cout<<" "<<h.search(70);

}