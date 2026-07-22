#include <iostream>
#include <string>
using namespace std;

class Customer {
    string name;
    int acc_number;
    int balance;
    
public:
    // 1. Declare static variable inside the class
    static int total;

    Customer(string name, int acc_number, int balance) {
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
        
        // 2. Increment total for each new customer created
        total++; 
    }

    void display() {
        cout << name << " " << acc_number << " " << balance << " " << total << endl;
    }

    void display_total() {
        cout << total << endl;
    }
};

// 3. Define and initialize the static member outside the class
int Customer::total = 0;

int main() {
    Customer A1("Ashutosh", 1, 1000);
    Customer A2("Mohit" , 2, 8000);
    A1.display();
    A2.display_total();
    return 0;
}