#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> qu;
    qu.push(10);
    qu.push(45);
    qu.push(18);
    qu.push(10);

    cout << "size of the queue is " << qu.size() << endl;

    while(!qu.empty()) {
        cout << qu.front() << endl;
        qu.pop();
    }

    return 0;
}