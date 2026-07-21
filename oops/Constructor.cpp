#include <iostream>
#include <string>
using namespace std;

class Customer {
    string name;
    int acc_Number;
    int balence;

public:
    // 1. Default Constructor
    Customer() {
        cout << "Hello Constructor\n";
        name = "Ashutosh";
        acc_Number = 5;
        balence = 100;
    }

    // 2. Parameterized Constructor
    Customer(string a, int b, int c) {
        cout << "Hello Constructor\n";
        this->name = a;
        this->acc_Number = b;
        this->balence = c;
    }

    Customer(string a , int b){
        cout<< "Hello Constructor\n";
        name = a;
        acc_Number = b;
    }

    void display() {
        cout << name << "  " << acc_Number << "  " << balence << endl;
    }
};

int main() {
    Customer A1;
    Customer A2("rohit", 23, 100);
    Customer A3("Mohit", 25);

    A1.display();
    A2.display();
    A3.display();

    return 0;
}

// Cunstructor over loading