#include <iostream>
using namespace std;

class Constructors {
    public:
    //Default constructor
    Constructors() {
        cout << "Default constructor invoked" << endl;
    }

    //Parameterized constructor
    Constructors(int val) : var(val) {
        cout << "Parameterized constructor invoked" << endl;
    }

    //copy Constructors
    Constructors(const Constructors& other) {
        cout << "Copy constructor invoked" << endl;
    }

    //Destructor
    ~Constructors() {
        cout << "Destructor invoked" << endl;
    }

    private:
    int var;

};

int main(int argc, char** argv) {
    Constructors obj;
    Constructors p_obj(5);
    Constructors c_obj(p_obj);
    
    return 0;
}