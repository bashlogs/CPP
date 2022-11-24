#include<iostream>
#include<vector>
using namespace std;

void vector1(){
    int i;
    vector<int> a;
    for(i=0;i<5;i++){
        a.push_back(i);
    }
    cout << "Output of begin to the end: ";
    for(auto i=a.begin();i != a.end(); i++){
        cout << *i << " ";
    }

    cout << "\nOutput of cbegin to the cend: ";
    for(auto i=a.cbegin();i != a.cend(); i++){
        cout << *i << " ";
    }

    cout << "\nOutput of rbegin to the rend: ";
    for(auto i=a.rbegin();i != a.rend(); i++){
        cout << *i << " ";
    }

    cout << "\nOutput of crbegin to the crend: ";
    for(auto i=a.crbegin();i != a.crend(); i++){
        cout << *i << " ";
    }
}
void vector2(){
    int i;
    vector<int> a;
    for(i=0;i<5;i++){
        a.push_back(i);
    }
    cout << "Size of Vector = " << a.size();
    cout << "\nCapacity of Vector = " << a.capacity();
    cout << "\nMax Size o Vector = " << a.max_size();

    a.resize(4);

    cout << "\nSize of Vector after resizing = " << a.size();

    if(a.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    a.shrink_to_fit();

    cout << "\nVector Elements are: ";
    for (auto i=a.begin(); i<a.end(); i++)
        cout << *i << " ";
}

void vector3(){
    int i;
    vector<int> a;
    for(i=1;i<10;i++){
        a.push_back(i*10);
    }
    cout << "\nReference operator a[2]: " << a[2];
    cout << "\nat operator a.at(5): " << a.at(5);
    cout << "\nfront operator a.front(): " << a.front();
    cout << "\nend operator a.back(): " << a.back();

    int* pos = a.data();
    cout<< "\nFirst element of array is: " << *pos;
}
void vector4(){
    int i;
    vector<int> a;
    a.assign(5,10);
    cout << "\nVector Elements are: ";
    for(i = 0 ; i < a.size(); i++){
        cout << a[i] << " ";
    }

    // To insert element at last position
    a.push_back(15);
    int n = a.size();
    cout << "\nThe last element is: " << a[n-1];

    // To remove last element
    a.pop_back();
    cout << "\nAfter pop_back Vector Elements are: ";
    for(i = 0 ; i < a.size(); i++){
        cout << a[i] << " ";
    }

    // To insert 5 at beginming
    a.insert(a.begin(),5);
    cout << "\nAfter inserting The first element is: " << a[0];

    // To remove the first element
    a.erase(a.begin());
    cout << "\nAfter erasing The first element is: " << a[0];

    // Emplace and insert both are same
    a.emplace(a.begin(), 5);
    cout << "\nAfter emplacing The first element is: " << a[0];

    // To insert element ar back
    a.emplace_back(20);
    cout << "\nAfter emplace_back The first element is: " << a[a.size()-1];

    // Clearing the vector
    a.clear();
    cout << "\nAfter clearing the vector size of vector: " << a.size();

    vector<int> b1, b2;
    b1.assign(2,4);
    b2.assign(2,5);
    cout << "\n\nVector b1: ";
    for(i = 0 ; i < b1.size(); i++){
        cout << b1[i] << " ";
    }

    cout << "\nVector b2: ";
    for(i = 0 ; i < b2.size(); i++){
        cout << b2[i] << " ";
    }

    b1.swap(b2);
    cout << "\nAfter Swapping\nVector b1: ";
    for(i = 0 ; i < b1.size(); i++){
        cout << b1[i] << " ";
    }

    cout << "\nVector b2: ";
    for(i = 0 ; i < b2.size(); i++){
        cout << b2[i] << " ";
    }
}   
int main(){
    //vector1();
    //vector2();
    //vector3();
    vector4();
    return 0;
}