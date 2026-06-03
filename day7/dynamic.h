#include <iostream>
using namespace std;
int main()
{
    int*p=new int;
    *p=42;
    cout<<"Value of p: "<<*p<<endl;
    delete p;
    p=nullptr;
    int*q=new int[5];
    cout<<"value "<<q<<endl;
    delete q;
    return 0;
}
