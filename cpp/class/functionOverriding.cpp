#include <iostream>
using namespace std;

class Car {
    public:
    virtual void carBrand(string /*other*/) = 0;
    
    virtual void carModel() final {                // 
        cout << "Car model not designed " << endl;
    }
};

class Ford : public Car {
    public:
    void carBrand(string brandName)  override {
        cout << " Ford cars" << endl;
    }
};

class Benz : public Car {
    public:
    void carBrand(string brandname) {
        cout << "Mercedes Benz" << endl;
    }
};

int main() {

    Benz b_obj;
    b_obj.carBrand("MB");
    
    return 0;
}