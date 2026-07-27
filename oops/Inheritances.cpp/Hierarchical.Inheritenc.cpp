#include <iostream>
using namespace std;

// base class  (parent class)

class Person 
{
    protected :
    string name;

    int age;

    public :
      Person(string name , int age)
      {
        this->name = name;
        this->age = age;

      };

      void displayInfo( ) {
        cout<<"Name: " << name <<" Age: "<< age<< endl;  
      };
};

// Derive class 1 ;

class Student : public Person 
{
    int rollNumber;

    public:
     Student (string name , int age , int rollNumber) : Person(name , age) {
        this->rollNumber = rollNumber;
     }

     void displayStudent () {
        displayInfo();
        cout<< "Roll Number: " <<rollNumber << endl;
     };
};

// Derived class 2
class Teacher : public Person 
{
    string subject;

    public:
      Teacher(string  name, int age , string subject) :Person(name , age) {
        this->subject = subject;
      };

    void displayTeacher()
    {
        displayInfo();
        cout<< " Subject: " << subject << endl;

    }

};

int main () 
{

    Student s1("Rahul" , 20 , 101);
    Teacher T1("De. sherma ", 45 , "Computer Science");

    cout << "\n -- Student Detail " << endl;
    s1.displayStudent();

    cout << "\n -- Teacher Detail "<< endl;
    T1.displayTeacher();


}