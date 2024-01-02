#include <iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
    void setdata(int a1,int b1)
    {
        real=a1;
        imag=b1;

    }
    void sum(Complex o1,Complex o2)
    {
        real=o1.real+o2.real;
        imag=o1.imag+o2.imag;
    }
    void print()
    {
        cout<<"The Value are "<<real<<" + "<<imag<<"i"<<endl;
    }
};
Complex c1,c2,c3;
c1.setdata(1,2);
c2.setdata(2,4);
c3.sum(c1,c2);
c3.print(); 

int main()
{
    

    return 0;
}