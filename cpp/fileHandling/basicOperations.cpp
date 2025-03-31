#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // ofstream object to write data into a file
    ofstream File("newfile.txt");
    if(File.is_open()) {
        File << "hello" << endl;
        File.close();
        cout << "Data is written successfully" << endl;
    } else {
        cout << "FIle is not open" << endl;
    }

    if(File) {
        File.open("newfile.txt",std::ios::app);
        cout << "Appended new line into file" << endl;
        File << "Appending this line" << endl;
        File.close();
    }
    string line;

    // ifstream/fstream object needs to be created to read line by line from file
    ifstream readFile("newfile.txt",std::ios::in);
    
    while(getline(readFile,line)) {
        cout << line << endl;
    }

    return 0;
}