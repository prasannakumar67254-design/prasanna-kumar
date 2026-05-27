#include<iostream>
using namespace std;

int value = 100;

class Demo {
    public:
     int value;
     
     void setValue(int value) {
         this->value = value;
     }
     
     void printAll() {
         int value = 50;
         cout<<"Local value"<<value<<endl;
         cout<<"Member value"<<this->value<<endl;
         cout<<"Global value"<<::value<<endl;
     }
};
int main() {
    Demo d;
    d.setValue(200);
    d.printAll();
    return 0;
}