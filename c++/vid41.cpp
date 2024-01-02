#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance

//           class Derived :Visibility Mode base1 , Visibility mode base2
//          {
//                  class body of class "DerivedC"
//          }
class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int =a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int =a;
    }
};
class Derived: public base1, public base2{
    public:
    void show()
    {
        cout<<"the value of base1 is:"<<base1int<<endl;
        cout<<"the value of base2 is:"<<base2int<<endl;
        cout<<"the sum of  base1 + base2 is :"<<(base1int+base2int)<<endl;
        
    }
};
/*
The inherited   derived class will look something like this
Data members
    base1int --> protected
    base2int --> protected
Member function 
 set_base1int() --> public
 set_base2int() --> public
 set_show() -->Public

*/

int main()
{
    Derived sangam ;
    sangam.set_base1int(20);
    sangam.set_base2int(30);
    sangam.show();
    
    return 0;
}