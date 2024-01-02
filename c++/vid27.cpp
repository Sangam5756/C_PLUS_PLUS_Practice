#include <iostream>
using namespace std;

class Complex;
class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int sumRealcomplex( Complex , Complex );
    int sumimgcomplex( Complex , Complex );
    
};

class Complex
{
    int a;
    int b;
    // individual method to declare friend function to acces data
    // friend int Calculator:: sumRealcomplex(Complex , Complex );
    // friend int Calculator:: sumimgcomplex(Complex , Complex );
    //similarly using below syntax we can declare entire class as a friend
    friend class Calculator;
    public:
    void setnumber(int n1, int n2)
    {
        a=n1;
        b=n2;
}
    void printnumber()
    {
        cout<<"Your Number is: "<<a<<" + "<<b<<"i"<<endl;
    }
    

};

int Calculator::sumRealcomplex( Complex o1, Complex o2)
    {
        return(o1.a+o2.a);  
    }
int Calculator::sumimgcomplex( Complex o1, Complex o2)
    {
        return(o1.b+o2.b);  
    }
int main()
{
    
    Complex o1,o2;
    o1.setnumber(1,3);
    o2.setnumber(4,6);
    Calculator cal;
    int re =cal.sumRealcomplex(o1,o2);
    // cout<<"The sum of o1 and o2 is :"<<re<<endl;//
    int res=cal.sumimgcomplex(o1,o2);
    cout<<"The sum of real  and imaginary part is "<<re<<" + "<<res<<"i"<<endl;
    return 0;
}   