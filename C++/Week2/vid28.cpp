#include <iostream>
using namespace std;
class Y;
class X
{
    int data;
    public:
    void setvalue(int a)
    {
        data=a;
    }
    friend  void add(X,Y);
};
class Y
{
    int num;
    public:
    void setvalue(int b)
    {
        num=b;
    }
    friend  void add(X, Y);
};
void add(X o1, Y o2)
{
    cout<<"The Sum of O1 and o2 is"<<o1.data+o2.num;
}

int main()
{
    X a1;
    Y b1;
    a1.setvalue(4);
    b1.setvalue(5);
    add(a1,b1);
    return 0;
}