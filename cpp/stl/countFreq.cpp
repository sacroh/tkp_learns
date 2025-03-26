#include <iostream>
#include <map>
#include <vector>
using namespace std;

void countFrequency(const vector<int>& vec) {
    map<int,int> mp;

    for(auto val : vec) {
        mp[val]++;
    }

    cout << "1 is present " << mp[1] << " times" << endl;
}
int main() {
    vector<int> v{1,2,1,2,1,4,5,4,6};
    countFrequency(v);
    return 0;
}