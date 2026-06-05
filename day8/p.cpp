#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, World!" << endl;
        outFile << "This is a file created using C++." << endl;
        outFile.close();
        cout << "File written successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}