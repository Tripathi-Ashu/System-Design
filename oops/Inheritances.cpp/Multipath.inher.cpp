// Dimond Problem 
  
#include <iostream>
using namespace std;


class ClassA 
{
    public:
    int a;
};

class ClassB: virtual public ClassA 
{
    public:
    int b;
};

class ClassC: virtual public ClassA
{
    public:
    int c;
};

class ClassD : public ClassB , public ClassC {
    public:
    int d;
};

int main()
{
     ClassD obj;
     obj.a = 100;


     cout<< "Vlaue of a: " << obj.a << endl;

     return 0; 
     
}