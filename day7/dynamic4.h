#include<iostream>
#include<string>
using namespace std;
class Product {
    private:
     int id;
     string name;
     double price;
    public:
     Product(): id(0), name("N/A"), price(0.0) {}
     Product(int i, string n, double p) : id(i), name(n), price(p) {}
     void display() const {
        cout<<"ID: "<<id<<"|"<<name<<"|$"<<price<<endl;
     }
    };
int main() {
    int count;
    cout<<"Enter number of products: ";
    cin>>count;
    Product* inventory = new Product[count];
    for(int i=0;i<count;i++) {
        inventory[i]=Product(100+i,"Product"+to_string(i+1), (i+1)*10.0);
    }
    cout<<"\nInventory:"<<endl;
    for(int i=0;i<count;i++) {
        inventory[i].display();
    }
    delete[] inventory;
    return 0;
}
