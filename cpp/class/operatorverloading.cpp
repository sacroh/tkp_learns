#include <iostream>
using namespace std;

class OperatorOverloading {
    public:
    OperatorOverloading(int val) {
        var = val;
    }

    OperatorOverloading operator *(OperatorOverloading& obj1) {
        var = this->var * obj1.var;
        return var;
    }

    void display() {
        cout << "var: " << var << endl;
    }

    private:
    int var;
};
int main() {

    OperatorOverloading obj1(13);
    OperatorOverloading obj2(14);
    OperatorOverloading obj3 = obj1*obj2;

    obj2.display();
    obj3.display();

    return 0;
}