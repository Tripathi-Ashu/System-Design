#include<iostream>
using namespace std;

class Customer 
{
    string name;
    int acc_number , balance , age;
    
    public:

    Customer(string name , int acc_number, int balance , int age)
    {
        this->name = name;
        this->balance = balance;
        this->acc_number = acc_number;
        this->age = age;
    }

    void deposit(int amount) 
    {
        if(amount >0) 
        {
            balance += amount;

        }
        else 
        {
            cout<< "INVALID amount\n";
        }
    }

    void updateage(int age) 
    {
        if(age > 0 && age <100) 
        {
            this->age = age;
        }
        else {
            cout<< " Age is invalid";
        }
    }

    void withdraw (int amount) 
    {
        if(amount <= balance && amount >0)
        {
            balance -= amount;
        }
    }

    void display() 
    {
        cout<< name << " " << acc_number << " " << balance <<endl;
    }


};


int main() {
    Customer A1("Ashutosh", 1 , 100 , 3);
    Customer A2("Mohit" , 2 , 1800 ,4);
    Customer A3("Tripathi" , 3, 2000 , 5);

    A1.updateage(-24);
    A1.deposit(200);
    A1.display();

}