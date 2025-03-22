#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<uint16_t> u_ptr = make_unique<uint16_t>(45);
    cout << "value in u_ptr is " << *u_ptr << endl;

    unique_ptr<uint16_t> u_ptr_1 = move(u_ptr);
    cout << "value in u_ptr " << *u_ptr_1 << endl;
    // can't access the pointer once the ownership is transferred
    // cout << "value after moving the ownership " << *u_ptr << endl;

    shared_ptr<uint> s_ptr = make_shared<uint>(18);
    cout << "value from share ptr " << *s_ptr << endl;

    shared_ptr<uint> s_ptr_1 = s_ptr;
    cout << "value from shared ptr 1 " << *s_ptr_1 << endl;

    weak_ptr<uint> w_ptr = s_ptr;
    // use_count is used to count the reference count
    cout << w_ptr.use_count() << endl;

    shared_ptr<uint> s_ptr_2 = s_ptr;
    cout << "value from shared ptr 1 " << *s_ptr_2 << endl;

    cout << w_ptr.use_count() << endl;

    return 0;
}

/*
std::weak_ptr is used to break circular references in cases where you have shared ownership but 
don't want one object to keep another object alive unnecessarily.
It does not affect the reference count of the object it points to.
It is useful when you want to observe or reference an object without preventing its destruction.
*/