#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;
    
    public:

    Customer()
    {
        name = "Ahsurosh";
        data = new int;
        *data = 10;
       cout<< " constructor is called";
    }

    // Destructor call revers order 
    ~Customer (){
        cout<< "Destructor is called";
    }
};

int main ()
{
    Customer A1;
}
