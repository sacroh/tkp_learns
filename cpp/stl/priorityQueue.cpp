#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(45);
    pq.push(93);

    cout << "Element with high priority " << pq.top() << endl;

    return 0;
}