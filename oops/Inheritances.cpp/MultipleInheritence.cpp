#include <iostream>
using namespace std;

class Engineer 
{
    public:

    string specilization ;

    void Work ()
    {
        cout << "I have specilization" << specilization <<endl;

    }
};

class  youtuber
{
    public:
    int subscriptions;

    void contentcreator ()
    {
        cout<< "I have a suscriver base of " << subscriptions<< endl;

    };
};

class codeTeacher : public Engineer , public youtuber 
{
     public:
     string name;

     codeTeacher (string name , string specilization , int subscriptions)
     {
        this->name = name;
        this->specilization = specilization;
        this->subscriptions = subscriptions;
     };

     void showcase()
     {
        cout <<"My name is " << name<<endl;
        Work();
        contentcreator();

     };
};


int main()
{
    codeTeacher A1 ("Rohit" , "CSE" , 49000);
    A1.showcase(); 
}