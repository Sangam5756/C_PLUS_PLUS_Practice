#include <iostream>
using namespace std;
/*
case 1:

class B: public A
{   Order of execution is A()-->B()

};
case 2:

class A: public b,public C
{   Order of execution is B()-->A()-->c()

};
case 3:

class A: public b,virtual public C
{   Order of execution is C()-->B()-->A()

};
*/
class Base1
{
    int data1;
    public:
    Base1(int a)
    {
        data1=a;
        cout<<"Base 1 Constructor called"<<endl;
    }
    void printdataBase1()
    {
        cout<<"The value is "<<data1<<endl;
    }

};
class Base2
{
    int data2;
    public:
    Base2(int a)
    {
        data2=a;
        cout<<"Base 2 Constructor called"<<endl;
    }
    void printdataBase2()
    {
        cout<<"The value is "<<data2<<endl;
    }

};
class Derived:public Base1,public Base2
{
    int Derived1;
    int Derived2;
    public:
    Derived(int a,int b,int c,int d) :Base1(a),Base2(b){
    Derived1=c;
    Derived2 =d;
    cout<<"Derived class Constructor called"<<endl;
    }
    void printdataDerived()
    {
         cout<<"The value is "<<Derived1<<endl;
          cout<<"The value is "<<Derived2<<endl;
        
    }
};

int main()
{
     Derived sangam(1,2,3,4);
    sangam.printdataBase1();
    sangam.printdataBase2();
    sangam.printdataDerived();
    return 0;
}