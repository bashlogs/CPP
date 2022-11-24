/*
    * Static Cast - This is the simplest type of cast that can be used. It is a compile-time cast. It does things like implicit conversions between types 
        (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).
    * Dynamic Cast: A cast is an operator that converts data from one type to another type. In C++, dynamic casting is mainly used for safe downcasting at run time. 
        To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.
    
*/
#include<iostream>
using namespace std;
class Parent{
    public:
        virtual void run(){
            cout << "Parent" << endl;
        }
};
class Brother : public Parent{

};
class Sister : public Parent {

};
int main(){
    Parent parent;
    Brother brother;
    Sister sister;
    
    Parent *ppb = &brother;
    Brother *pbb = dynamic_cast<Brother *>(ppb);
    if(pbb == nullptr) {
        cout << "Invalid Cast" << endl;
    }
    else{
        cout << pbb << endl;
    }
    return 0;
}