#include <iostream>
using namespace std;
class BaseClass
{
    public:
    int var_base =1;
  virtual void Display()
    {
        cout<<"The Value of var_base is :"<<var_base<<endl;
    }

};
class DerivedClass:public BaseClass
{   
    public:
    int var_derived =2;
    void Display()
    {
        cout<<"  2 The Value of var_base is :"<<var_base<<endl;
        cout<<"2 The Value of var_derived is :"<<var_derived<<endl;
    }

};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer =&obj_derived;
    base_class_pointer->Display();

    return 0;
}