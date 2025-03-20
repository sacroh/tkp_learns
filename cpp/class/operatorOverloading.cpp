#include <iostream>
using namespace std;

class OperatorOverloading {
    public:
    OperatorOverloading(int val) {
        var = val;
    }

    OperatorOverloading operator *(OperatorOverloading& obj1) {
        // this->var = this->var * obj1.var;
        return this->var * obj1.var;;
    }

    void display() {
        cout << "var: " << var << endl;
    }

    private:
    int var;
};
int main(int argc, char* argv[]) {

    cout << argv[0] << endl;

    OperatorOverloading obj1(13);
    OperatorOverloading obj2(14);
    OperatorOverloading obj3 = obj1*obj2;

    obj2.display();
    obj3.display();

    return 0;
}