#include <iostream>
using namespace std;

class Complex
{
int a ,b;
    public:
    //creating a constructor 
    //Constructor is a special member function with same name as of the class.
    //it is automatically invoked , whenever  an   object is created.
    //it is used to initialize the object of its  own class
Complex(void); //constructor Declaration

void printdata()
{
    // cout<<"your number  is "<<a<<" + "<<b<<endl;
    cout<<"Your Number  is "<<a<<" + "<<b<<"i"<<endl;
}
};
Complex :: Complex(void) // this is a default constructor as it takes no parameter
{
        // cout<<"Number1 :";
        // cin>>a;
        // cout<<"Number2 :";
        // cin>>b;
// cout<<"your number  is "<<a<<" + "<<b<<endl;
// cout<<"Sum of two number is :"<<a+b<<endl;

    a=10;
    b=20;
}



int main()
{
    Complex  c1;
c1.printdata();
// c2.printdata();


    return 0;
}
/*
Characteristics of Constructor
1.It should be declare public section of the class
2.There are automatically called whenever object is created
3.They cannot return values Do not have return type
4.It can have default arguments
5.We cannot refered to their address



*/