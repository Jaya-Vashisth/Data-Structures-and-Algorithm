// PROGRAM 2 (Compiles and runs fine)
#include<iostream>
using namespace std;

void fun(char *a)
{   a="done";
    cout << "non-const fun() ";
}

void fun(const char *a)
{

    a="done";
cout << "const fun() " ;
}

int main()
{
 char *ptr = "GeeksforGeeks";
fun(ptr);
cout<< *ptr;
return 0;
}
