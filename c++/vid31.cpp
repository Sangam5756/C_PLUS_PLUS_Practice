#include <iostream>
using namespace std;

class Complex
{
    
    int a,b;
    public:
    
    //CONSTRUCTOR OVERLOADING

    Complex() //Default constructor
    {
        a=0;
        b=0;
    }
     Complex(int x, int y)//Constructor with two parameter
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"Your Number  is "<<a<<" + "<<b<<"i"<<endl;
    }
    Complex(int x) //Constructor with one parameter
    {
        a=x;
        b=0;
    }
};

int main()
{
    Complex c1(1,4);
    c1.print();
    
    Complex c2(1);
    c2.print();
    Complex c3;
    c3.print(); 
    
    return 0;
}