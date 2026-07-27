#include <iostream>
using namespace std;

// Base Class

class Person 
{   
    protected:

    string name;

    public:

    Person(string name =" ")
    {
        this->name = name;
    }

    void showPerson()
    {
        cout << "Name :" << name << endl;

    }
    // Drived Class 1 ;

    
    
};

class Student : virtual public  Person
{ 
    
        protected :
         int student_ID;
          public:
    Student(string name , int student_ID) : Person(name)
    {
        this->student_ID = student_ID;
    };

    void showStudent() 
    {
        cout << "Student ID " << student_ID<< endl;
    }
    };
   


class Teacher : virtual public Person {
    protected :
    string subject;

    public :
    Teacher (string name , string subject) : Person (name) {
        this->subject = subject;
    };

    void showTeacher() {
        cout<<"Subject :" << subject <<endl;
    };
};

// Grand Child class ( Multiple Inheritence - inheritence from Student and teacher )

class TeachingAssistent : public Student , public Teacher {
    public:
    TeachingAssistent(string  name , int id , string subject) : Person(name) , Student(name , id), Teacher(name , subject) {}

    void displayDetail() {
        showPerson();
        showStudent();
        showTeacher();
    }
};

int main ()
{
    TeachingAssistent ta("rohit" , 1001 , "C++ Programming");

    cout << "--Teaching Assistant Details--- "<< endl;
    ta.displayDetail();

    return 0;

}