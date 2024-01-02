#include <iostream>
using namespace std;
class Base
{
    int a;
    int b;

public:

Base(void);
};
Base::Base(void)
{
    cin>>a>>b;
    cout<<"The sum is :"<<a+b;
}

int main()
{
    Base b;
    return 0;
}