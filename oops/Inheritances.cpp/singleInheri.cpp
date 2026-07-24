#include <iostream>
using namespace std;


class Human
{
     protected:
     string name ;
     int age ;

     public:

     void work () 
     {
        cout<< " I am working \n";

     }

};

class Student : public Human 
{
    int roll_number , fees;

    public:
    Student (string name , int age , int roll_number , int fees)
    {
      this->name = name;
      this->roll_number = roll_number;
      this->fees = fees;
    }
};


int main()
{
  Student A1("Rohit", 26 , 46 ,45);
  A1.work();
}

// phele parent class ka constror call hota hai 
// destructor revers order me kaam krta hai 

