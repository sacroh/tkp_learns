#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;
    stk.push(10);
    stk.push(18);
    stk.push(45);

    cout << "size of the stack is " << stk.size() << endl;

    stack<int> stk_1 = stk;

    cout << stk_1.top() << endl;

    while(!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}