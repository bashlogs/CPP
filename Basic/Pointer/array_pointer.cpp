#include<iostream>
using namespace std;
void array1()
{
    int val[3] = { 5, 10, 20 };
    int* ptr;
    ptr = val;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
}
void array2()
{
    int v[3] = { 10, 100, 200 };
    int* ptr;
    ptr = v;
    for (int i = 0; i < 3; i++) {
        cout << "\nValue at ptr = " << ptr << "\n";
        cout << "Value at *ptr = " << *ptr << "\n";
        ptr++;
    }
}
int main(){
    array1();
    array2();
    return 0;
}