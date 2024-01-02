#include <iostream>
using namespace std;

class Base1
{
    public:
    void greet()
    {
        cout<<"How Are You"<<endl;
    }
};
class Base2
{   
    public:
    void greet()
    {
        cout<<"Kaise Ho"<<endl;
    }

};
class Derived : public Base1, public Base2{
    int a;
    public:
    void greet()
    {
        // Base2::greet();
    }

};
class B1
{
    public:
    void say()
    {
        cout<<"Hello World"<<endl;
    }
};
class c1
{
    public:
    void say()
    {
        cout<<"d World"<<endl;
    }
};

class D:public B1,public c1
{   int a;
    public:
    void say()
    {
        cout<<"Hello galaxy"<<endl;
    }
};


int main()
{
    // // Ambiguity 1
    Base1 obj1;
    Base2 obj2;
    Derived obj3;
    obj1.greet();
    obj2.greet();
    obj3.greet();

// D b1;
// b1.say();
    return 0;
}