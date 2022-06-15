// PROGRAM 2 (Compiles and runs fine)
#include<iostream>
using namespace std;

void fun(char *a)
{cout << "non-const fun() " ;
}

void fun(const char *a)
{

    a="done";
cout << "const fun() " ;
}

int main()
{
const char *ptr = "GeeksforGeeks";