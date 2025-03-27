#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> lt{18,45};
    cout << "size of list " << lt.size() << endl;

    auto it = lt.begin();
    lt.insert(it,{7,10});
    cout << "size of list " << lt.size() << endl;
    lt.push_back(93);
    lt.push_front(6);

    lt.insert(it,63);

    cout << "size of the list " << lt.size() << endl;
    cout << "{";
    for(auto el : lt) {
        cout << el << ",";
    }
    cout << "}" << endl;
    lt.erase(it);
    advance(it,1);
    lt.erase(lt.begin(),lt.end());

    cout << "{";
    for(auto el : lt) {
        cout << el << ",";
    }
    cout << "}" << endl;

    return 0;
}