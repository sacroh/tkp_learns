#include <iostream>
using namespace std;

class Base {
    public:
    Base(int val) {
        ptr = new int(val);
    }

    int var;

    void display() {
        cout << "value at ptr is " << *ptr << endl;
    }

    ~Base() {
        cout << "Destructor doing its job" << endl;
        delete ptr;
        ptr = nullptr;
    }
    
    private:
    int* ptr;

};

int main() {
    Base obj(10);

    obj.display();

    return 0;
}