#include <iostream>
using namespace std;

class number
{
int a;
    public:
        number(){}
        number(int num)
        {
           a=num;
        }
        // When No copy constructor found , compiler supply its own copy constructor
        number(number  &obj)
        {
            cout<<"Copy constructor called !!!"<<endl;
           a=obj.a;
        }
        void display()
        {
            cout<<"The Number is :"<<a<<endl;
        }
}; 
int main()
{
    number x(45),y,z;
    x.display();
    number z1(x); //Copy constructor invoked
    z1.display();
    
    return 0;
}