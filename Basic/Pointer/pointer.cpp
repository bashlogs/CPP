/*
  * Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. 
    Iterating over elements in arrays or other data structures is one of the main use of pointers.
  * call-by-reference
  * 
*/

#include<iostream>
using namespace std;
int main(){
    int var = 20;
    int* ptr;
    ptr = &var;
    cout << "The value of ptr = " << ptr << "\n";
    cout << "The value of var = " << var << "\n";
    cout << "The value of *ptr = " << *ptr << "\n";
    return 0;
}