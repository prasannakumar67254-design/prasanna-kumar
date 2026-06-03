#include<iostream>
#include<string>
using namespace std;
template<typename T>
T getMAX(T a, T b) {
    return (a > b) ? a : b;
}
template<typename T,typename U>
auto add(T a, U b) -> decltype(a+b) {
    return a + b;
}
int main() {
    cout<<"Max of 10 and 30: "<<getMAX(10,30)<<endl;
    cout<<"Max of 3.14 and 2.71: "<<getMAX(3.14,2.71)<<endl;
    cout<<"Max of 'a' and 'z': "<<getMAX('a','z')<<endl;
    cout<<"Max(explict doouble): "<<getMAX<double>(5,7.5)<<endl;
    return 0;
}