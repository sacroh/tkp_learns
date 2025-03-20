// Rule of Three:
// If you have a class that manages dynamic memory, you'd need to define these functions to ensure correct resource management 
// and avoid issues like memory leaks, double deletion, and undefined behavior.

#include <iostream>
using namespace std;

class Base {
    private:
    int* ptr;

    public:
    Base(int val) {
        cout << "ptr is initialized with a data" << endl;
        ptr = new int(val);
        cout << "value at ptr:" << *ptr << endl;
    }

    Base(const Base& other) {
        ptr = new int(*other.ptr);
        cout << "value at ptr:" << *ptr << endl;
    }

    Base operator=(const Base& other) {
        this->ptr = other.ptr;
        return *this;
    }
    ~Base() {
        cout << "Ptr is deleted" << endl;
        delete ptr;
        ptr = nullptr;
    }


};
int main() {
    Base obj(45);
    Base new_obj(obj);

    Base op_obj = obj;


    return 0;
}

/*
The "Rule of Three" (and its extended version, "Rule of Five") helps ensure that classes handle resource management correctly when dealing with dynamic memory allocation or other resources.4

Rule of Three:
If your class involves dynamic memory allocation or any other resource management, you should explicitly define the following three special member functions:

Destructor:
To release any dynamically allocated memory or resources when an object is destroyed.

Copy Constructor:
To correctly copy dynamically allocated memory from one object to another during object creation.

Copy Assignment Operator:
To correctly copy dynamically allocated memory when assigning one existing object to another.

Rule of Five (C++11 and later):
The Rule of Five extends the Rule of Three, adding the following two special functions:

Move Constructor:
This constructor transfers ownership of resources from one object to another (without copying), improving performance in certain situations.

Move Assignment Operator:
This operator transfers ownership of resources during assignment (also without copying), again improving performance by avoiding unnecessary allocations and deallocations.

*/