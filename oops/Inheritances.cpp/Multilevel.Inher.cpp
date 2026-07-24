#include<iostream>
using namespace std;
class Person
{

    protected:
    string name;

    public :

    void introduce()
    {
        cout<< 'Hello my name ashutosh'<<name<<endl;

    }; 
};

class Employee : public Person 
{
    protected:
    int salary:

    public:
    void monthly_salary()
    {
        cout << "My monthely alalary is "<< salary<< endl;

    }
};


int main()
{

}