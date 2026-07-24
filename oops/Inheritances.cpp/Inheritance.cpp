//  The capability of class to derive property &  charactistic from another class 

#include <iostream>
using namespace std;

class Human 
{
     string Religion , color;
     protected:
     string name;
     int age , weight;
};

class Student: protected Human
{
    private:
    int roll , fees;

    public:

    Student( string name , int age , int weight , int rool )
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll = roll;
    }

    void display() 
    {
        cout<<name <<" " << age << " " << weight << " ";
    };
};

class Teacher : public Human 
{
    int salary , id ;

};


int main() 
{
    Student A1 ("Ash" , 12 , 400 , 200 );
}