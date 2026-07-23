#include <iostream>
using namespace std ;

class Customer 
{
    string name;
    int acc_number , balance;
    static int total_customer;
    static int total_balance;

    public:

    Customer(string name, int acc_number, int balance) {
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;

        total_customer++;
        total_balance += balance;
    }

    static void acceStatic() {
        cout<<"Total number of customer " << total_customer<<endl;
        cout<< " Total Balance" << total_balance<<endl;
    }

    void deposit(int amount)
     {
        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }
     }
    void withdraw (int amount) {
        if(amount <= balance && amount >0){
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display() 
    {
        cout<<name<< "" << acc_number << " " << balance<< " "<< total_balance<<endl;
    }

    void display_total() 
    {
        cout<<total_customer<<endl;
    }


};
    int Customer :: total_balance =0;
    int Customer :: total_customer =0;

int main() {
    Customer A1("Ashutosh" , 1 , 1000);
    Customer A2("Mohit" , 2 , 3000);
    Customer A3 ("Ankit" , 3 , 2000);
    A1.deposit(800);
    A2.withdraw(500);
    A1.display();
    A2.display();
    A3.display();

    Customer::acceStatic();
}