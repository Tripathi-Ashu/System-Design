// They are attribute of clases or class member 
// it is declear using static keyword 
// Only one copy of the member is created for the entiry 
// class and use all object 

 
#include<iostream>
using namespace std;


class Customer 
{
   string name;
   int acc_number , balance;
   int total;

   public:

   Customer (string name, int acc_number , int balance)
   {
     this->name= name;
     this->acc_number = acc_number;
     this->balance = balance;
     total = 1;
   }

   void display (){
    cout<<name<< " " << acc_number<< " " << balance << " " << total;
    
   }
};

int main(){
    Customer A1("Ashutosh" , 1 , 1000);
    Customer A2("Ashsu" , 2 , 20000);
}