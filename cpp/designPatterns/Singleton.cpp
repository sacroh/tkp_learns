#include<iostream>
#include<memory>
#include<mutex>
using namespace std;

class Singleton {
    private:
    Singleton() {
        cout << "constructor is invoked" << endl;
    }

    ~Singleton() {
        delete sptr;
        sptr = nullptr;
    }

    Singleton(const Singleton& other) = delete;
    Singleton& operator=(const Singleton& other) = delete;

    public:
    static Singleton* getInstance() {
        lock_guard<mutex> lock(mtx);
        if(sptr == nullptr) {
            sptr = new Singleton();
        }
        return sptr;
    }

    void display() {
        cout << "sptr:" << sptr << endl;
    }
    static Singleton* sptr;
    static mutex mtx;
};

Singleton* Singleton::sptr= nullptr;
mutex Singleton::mtx;

int main() {
    Singleton* Sg_obj = Singleton::getInstance();
    Sg_obj->display();
    return 0;
}