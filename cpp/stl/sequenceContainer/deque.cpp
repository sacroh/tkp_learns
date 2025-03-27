#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(18);
    dq.push_back(45);
    dq.push_front(7);

    cout << dq.size() << endl;

    cout << dq[2] << endl;

    for(auto el : dq) {
        cout << el << ",";
    }
    cout << endl;
    cout << "front: " << dq.front() << endl;
    cout << "back: " << dq.back() << endl;
    return 0;
}