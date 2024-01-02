#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    // A& setdata(int a)
    void setdata(int a)
    {
       this->a=a;
    //    return *this;
    }
    void getdata()
    {
        cout<<"The Value of a is :"<<a<<endl;
    }
};
int main()
{   //   This is a keyword which is a pointer
//       which point to the object which invoked the member functio;
A a;
a.setdata(30);
a.getdata();

    return 0;
}