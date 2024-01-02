#include <iostream>
using namespace std;

class Base
{
    public:
    int a =10;
};
class Derived:  virtual public Base
{
    public:
    int b =20;
};
class Derived2: public virtual Base
{
    public:
    int c=30;
   
};
class Derived3:public Derived,public Derived2
{
    public:
    int mul=a*b*c;
    void printnumber()
    {   
        
        cout<<"The Value of a is :"<<a<<endl;
        cout<<"The Value of b is :"<<b<<endl;
        cout<<"The Value of c is :"<<c<<endl;
        cout<<"The Multiplication is :"<<mul<<endl;
    }
};

int main()
{
    Derived3 ob;
    ob.printnumber();

    return 0;
}