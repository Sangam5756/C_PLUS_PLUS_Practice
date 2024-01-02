#include <iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
    void getdata()
    {
        cout<<"The Real Part is "<<real<<endl;
        cout<<"The Imaginary Part is "<<imag<<endl;
    }
    void setdata(int a,int b)
    {
        real =a;
        imag =b;
    }
    
    
};

int main()
{
    // Complex o1;
    // Complex *ptr =&o1;
    Complex *ptr =new Complex;
    // (*ptr).setdata(1,2); is Exactly same as
    ptr->setdata(1,2);
    // (*ptr).getdata(); is  as good as
    ptr->getdata();
        
        // Array Of Objects 
    
    Complex *ptr1 =new Complex[4 ];
    ptr1->setdata(1,4);
    ptr1->getdata();
    return 0;
}