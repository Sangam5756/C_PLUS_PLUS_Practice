#include <iostream>
using namespace std;

class complex
{

    int r,i;
    public:
    void setdata(int n1,int n2)
    {
        r=n1;
        i=n2;
    }
    void getdata()
    {
        cout<<"The Values are "<<r<<" + "<<i<<"i"<<endl;
    }
    void sum(complex o1,complex o2)
    {
        r=o1.r+o2.r;
        i=o1.i+o2.i;
    }
    void mul(complex o1,complex o2)
    {
        r=((o1.r*o2.r)-(o1.i*o2.i));
        i=((o1.r*o2.i)+(o1.r*o2.i));
        
    }
};
int main()
{
    complex c1,c2,c3,c4;
    c1.setdata(1,2);
    c2.setdata(2,3);
    c1.getdata();
    c2.getdata();
    c3.sum(c1,c2);
    c3.getdata();
    c4.mul(c1,c2);
    c4.getdata();

    return 0;
}