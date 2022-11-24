/*
  * Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. 
    Iterating over elements in arrays or other data structures is one of the main use of pointers.
  * call-by-reference
  * Pointer is used to assign the address of any variable using unary operator.
  * Assigning the address of a variable to a pointer using the unary operator (&) which returns the address of that variable.
  * Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified by its operand.
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