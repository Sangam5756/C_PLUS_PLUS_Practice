#include <iostream>
using namespace std;
class Y;
class X
{
    int data;
    public:
    void getdata(int a)
    {
        data=a;
    }
    friend void Add(X , Y);
};
class Y
{
    int data2;
    public:
    void getdata(int a)
    {
        data2=a;
    }
    friend void Add(X , Y);
    
};

void Add(X o1,Y o2)
{
    cout<<"The sum is :"<<o1.data+o2.data2<<endl;
}

int main()
{
 X o1;
 Y o2;
 o1.getdata(20);
 o2.getdata(30);
    Add(o1,o2);
    return 0;}