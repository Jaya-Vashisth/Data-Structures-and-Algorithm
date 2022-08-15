#include <bits/stdc++.h>
using namespace std;

class hashing
{
    int capacity;
    int size;
    int *arr;

public:

//constructor
    hashing(int c)
    {
        capacity = c;
        size = 0;

        arr = new int[c];
        for (int i = 0; i < c; i++)
            arr[i] = -1;
    }
    
    //function to return the slot for key in hash table
    int hash_key(int key)
    {
        return key % capacity;
    }

    //insert the key in hash table
    bool insert(int key)
    {
        int i = hash_key(key);
        
        //check for the correct slot 
        while (arr[i] != key && arr[i] != -1 && arr[i] != -2)
            i = (i + 1) % capacity;
        
        //key is already present so cannot insert
        if (arr[i] == key)
            return false;
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }
   
   //function to remove the key from hash table
    bool erase(int key)
    {
        int i = hash_key(key);
        int h = i;
        
        //loop until not get the empty slot
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                size--;
                return true;
            }

            i = (i + 1) % capacity;
            // again reach the same slot which indicate key not present in hash table
            if (i == h)
                return false;
        }

        return false;
    }
    
    //search the given key in hash
    bool search(int key)
    {
        int i = hash_key(key);
        int h = i;

        while (arr[i] != -1)
        {
            if (arr[i] == key)
                return true;

            i = (i + 1) % capacity;

            if (i == h)
                return false;
        }

        return false;
    }
};

int main()
{
    hashing h(7);

}