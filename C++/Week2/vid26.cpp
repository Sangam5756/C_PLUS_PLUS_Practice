#include <iostream>
using namespace std;
class Complex
{
    int r;
    int i;
    public:
    void setnumber(int n1, int n2)
    {
        r=n1;
        i=n2;
}
//Using Belo\w line means that non member - sumcomplex  function is not allowed to
//anything with my private data
    friend Complex sumcomplex(Complex o1, Complex o2);
    friend Complex MulComplex(Complex o1, Complex o2);
    void printnumber()
    {
        cout<<"Your Number is: "<<r<<" + "<<i<<"i"<<endl;
    }
    void sumprint()
    {
        cout<<"sum of Imaginary and real number :"<<r<<" + "<<i<<"i"<<endl;
    }

};
Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnumber((o1.r + o2.r),(o1.i +o2.i));
    return o3;
}
Complex MulComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnumber((o1.r*o2.r)+(o1.i*o2.i),(o1.r*o2.i)-(o1.r*o2.i));
    return o3;
}

int main()
{
  Complex c1,c2,sum;

  c1.setnumber(41,6);
  c2.setnumber(3,21);
  c1.printnumber();
  c2.printnumber();

  sum =sumcomplex(c1,c2);
  sum.sumprint();
  sum =MulComplex(c1,c2);
  sum.sumprint();
    return 0;
}

/*
Properties Of friend Function
1.Not in the scope of the class 
2.it is not in the scope of the class and it connot be called from the object
of class .c1.sumcomplex()== invalid
3.  can be invoked without the help of any objects
4. usually contains object as a arguments
5.can be declared inside the public or private section of the class 
6.it cannot access the members directly by their names  and need  object_name.member_name
to access any member


*/