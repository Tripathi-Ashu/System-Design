#include<iostream>
using namespace std;
class Person
{

    protected:
    string name;

    public :

    void introduce()
    {
        cout<< "Hello my name ashutosh"<<name<<endl;

    }; 
};

class Employee : public Person 
{
    protected:
    int salary;

    public:

    void monthly_salary()
    {
        cout << "My monthely alalary is "<< salary<< endl;

    };
};

class Manager: public Employee 
{
    public:

    string department;

    Manager (string name , int salary , string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work() 
    {
        cout<< "I am learnig the departmeent" << department<<endl;
    }
};


int main()
{
    Manager A1("Rohit" , 23 , "Finance");
    A1.work();
};