#include <iostream>
#include <memory>
using namespace std;

class ShallowCopy {
    public:
    ShallowCopy(uint16_t val) {
        m_var = val;
    }

    ShallowCopy(const ShallowCopy& s_copy) {
        m_var = s_copy.m_var;
    }

    void getVal() {
        cout << "Value from shallow copy " << m_var << endl;
    }

    private:
    uint16_t m_var;
};

class DeepCopy {
    public:
    DeepCopy(int val) {
        d_ptr = new uint16_t(val);
    }

    DeepCopy(const DeepCopy& d_copy) {
        this->d_ptr = new uint16_t(*d_copy.d_ptr);
    }

    void getValue() {
        cout << "value from deep copy " << *this->d_ptr << endl;
    }

    ~DeepCopy() {
        delete d_ptr;
        d_ptr = nullptr;
    }

    private:
    uint16_t* d_ptr;
};

int main() {
    ShallowCopy obj(5);
    obj.getVal();

    ShallowCopy S_obj(obj);
    obj.getVal();

    DeepCopy d_obj(10);
    d_obj.getValue();

    DeepCopy cd_obj(d_obj);
    cd_obj.getValue();

    return 0;
}